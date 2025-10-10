#include "solve_ivp.h"

std::vector<double> operator+ (std::vector<double> l, std::vector<double> r) {
	std::vector<double> res(l.size());
	for (size_t i = 0; i < res.size(); ++i) res[i] = l[i] + r[i];
	return res;
}

std::vector<double> operator- (std::vector<double> l, std::vector<double> r) {
	std::vector<double> res(l.size());
	for (size_t i = 0; i < res.size(); ++i) res[i] = l[i] - r[i];
	return res;
}

std::vector<double> operator* (double a, std::vector<double> r) {
	std::vector<double> res(r.size());
	for (size_t i = 0; i < res.size(); ++i) res[i] = a * r[i];
	return res;
}

double norm2(const std::vector<double>& v) {
	double res = 0.0;
	for (size_t i = 0; i < v.size(); ++i) {
		res += v[i] * v[i];
	}
	return std::sqrt(res);
}

double norminf(const std::vector<double>& v) {
	double res = 0.0;
	for (size_t i = 0; i < v.size(); ++i) {
		res = std::max(std::abs(v[i]), res);
	}
	return res;
}

double norm(const std::vector<double>& v) {
	return norminf(v);
}

point::point(int N) : x(0.0) {
	V.resize(N);
}
point::point(const point& p) : x(p.x), V(p.V) {}
point::point(point&& p) : x(p.x), V(std::move(p.V)) {}
point& point::operator= (const point& p) {
	x = p.x;
	V = p.V;
	return *this;
}
point& point::operator= (point&& p) {
	x = p.x;
	V = p.V;
	return *this;
}

//test task
std::vector<double> rhs1(double x, const std::vector<double>& V) { // fu^2 + u - u^3sin10x, f = 
	std::vector<double> Y(V.size());

	Y[0] = -5 / 2 * V[0];

	return Y;
}

//main task #1
std::vector<double> rhs2(double x, const std::vector<double>& V) { // fu^2 + u - u^3sin10x, f = ln(x+1) / (x^2 + 1)
	std::vector<double> Y(V.size());

	Y[0] = std::log(x + 1) / (x * x + 1) * V[0] * V[0] + V[0] - V[0] * V[0] * V[0] * std::sin(10 * x);

	return Y;
}

double a = 1.0, b = -1.0;

//main task #2
std::vector<double> rhs3(double x, const std::vector<double>& V) {
	std::vector<double> Y(V.size());

	Y[0] = V[1];
	Y[1] = -a * V[1] * V[1] - b * std::sin(V[0]);

	return Y;
}

struct Rhs {
private:
	int Type;
public:
	Rhs(int type) : Type(type) {}
	std::vector<double> operator() (double x, const std::vector<double>& S) const {
		switch (Type) {
		case 1:
			return rhs1(x, S);
		case 2:
			return rhs2(x, S);
		case 3:
			return rhs3(x, S);
		default:
			throw std::logic_error("Unknown rhs");
		}
	}
};


std::vector<double> answer0(double x, const std::vector<double>& S) {
	std::vector<double> Y(S.size());
	double C2 = (S[0] + S[1]) / 2, C1 = (S[1] - S[0]) / 2;
	std::vector<double> v1(2), v2(2);

	v1[0] = -1.0;	v2[0] = 1.0;
	v1[1] = 1.0;	v2[1] = 1.0;

	Y = C1 * exp(-1000 * x) * v1 + C2 * exp(-0.01 * x) * v2;

	return Y;
}

std::vector<double> answer1(double x, const std::vector<double>& S) {
	std::vector<double> Y(S.size());

	Y[0] = S[0] * std::exp(-5 / 2 * x);

	return Y;
}

std::vector<double> answer2(double x, const std::vector<double>& S) {
	std::vector<double> Y(S.size());

	return Y;
}

std::vector<double> answer3(double x, const std::vector<double>& S) {
	std::vector<double> Y(S.size());

	return Y;
}

struct Answer {
private:
	int Type;
public:
	Answer(int type) : Type(type) {}
	std::vector<double> operator() (double x, const std::vector<double>& S) const {
		switch (Type) {
		case 0:
			return answer0(x, S);
		case 1:
			return answer1(x, S);
		case 2:
			return answer2(x, S);
		case 3:
			return answer3(x, S);
		default:
			throw std::logic_error("Unknown rhs");
		}
	}
};

bool isless_all(const point& r, const point& l) {
	if (r.x > l.x) return false;
	for (size_t i = 0; i < r.V.size(); ++i) if (r.V[i] > l.V[i]) return false;

	return true;
}

bool ismore_all(const point& r, const point& l) {
	if (r.x < l.x) return false;
	for (size_t i = 0; i < r.V.size(); ++i) if (r.V[i] < l.V[i]) return false;

	return true;
}

bool isless_any(const point& r, const point& l) {
	if (r.x < l.x) return true;
	for (size_t i = 0; i < r.V.size(); ++i) if (r.V[i] < l.V[i]) return true;

	return false;
}

bool ismore_any(const point& r, const point& l) {
	if (r.x > l.x) return true;
	for (size_t i = 0; i < r.V.size(); ++i) if (r.V[i] > l.V[i]) return true;

	return false;
}

point RK4(const point& P, double h, Rhs rhs) {
	size_t n = P.V.size();
	point Res(n);
	Res.x = P.x + h;

	std::vector<double> k1(n);
	std::vector<double> k2(n);
	std::vector<double> k3(n);
	std::vector<double> k4(n);

	k1 = rhs(P.x, P.V);
	k2 = rhs(P.x + h / 2, P.V + h / 2 * k1);
	k3 = rhs(P.x + h / 2, P.V + h / 2 * k2);
	k4 = rhs(P.x + h, P.V + h * k3);

	Res.V = P.V + h / 6 * (1 * k1 + 2 * k2 + 2 * k3 + 1 * k4);

	return Res;
}

// type - type of rhs, maxN - maximum count of steps, S - start point, h - start step, tol - tolerance parameter (eps), mipP - minimal point (left border on u1, lower border on u2, left border on x), maxP - maximum point, withOLP - OLP control mode
// add val_a, val_b
std::pair <std::vector < std::vector< point > >, std::vector <std::vector <int>>> solve_ivp(int type, int maxN, const point& S, double h, double tol, const point& minP, const point& maxP, bool withOLP, double val_a, double val_b) {
	a = val_a;
	b = val_b;

	// OLP mode, border parameter
	double eps = 1e-4;
	tol = std::abs(tol);
	size_t n = S.V.size();
	Answer answer(type);
	Rhs rhs(type);

	// declaring and initializing all vars
	point maxPeps(n), minPeps(n);
	std::vector<double> One(n);
	for (size_t i = 0; i < One.size(); ++i) One[i] = 1.0;
	maxPeps.x = maxP.x - eps;
	maxPeps.V = maxP.V + (-eps) * One;
	minPeps.x = minP.x + eps;
	minPeps.V = minP.V + eps * One;
	std::vector<point> V;
	std::vector<point> E;
	std::vector<point> e_appr;
	std::vector<point> U;
	std::vector<point> V_half;
	std::vector<int> C1vec;
	std::vector<int> C2vec;
	int p = 4; // order
	point curP(n), tmp1P(n), tmp2P(n);
	curP = S;
	point curE(n);
	point cure(n);
	point curU(n);
	int C1, C2;
	bool abort = false;
	bool next;
	bool pomitsya = true;
	double Spar;
	curE.x = S.x;
	cure.x = S.x;
	curE.V = One - One;
	cure.V = One - One;
	E.push_back(curE);
	e_appr.push_back(cure);
	V.push_back(S);
	U.push_back(S);
	V_half.push_back(S);
	C1vec.push_back(0);
	C2vec.push_back(0);

	// while not reaching the border
	while (!abort) {
		abort = false;
		next = false;
		C1 = 0;
		C2 = 0;
		// while tolerance is not suitable
		while (!next) {
			next = true;

			// next point calculation
			curP = RK4(curP, h, rhs);
			if (isless_all(curP, maxPeps) && ismore_all(curP, minPeps)) {
			}
			else if (ismore_any(curP, maxP) || isless_any(curP, minP)) { // if out of the allowed set
				curP = V[V.size() - 1];
				if (pomitsya) { // better behaviour, but we have to control step
					h /= 2;
					continue;
				}
				else { // worse behaviour, but we can see stiff equasion effect
					abort = true;
					break;
				}
			}
			else { // in the 'water' part
				abort = true;
			}

			// OLP calculation
			// assiming that it is impossible to reach the border with half-step on the first step
			tmp1P = RK4(V[V.size() - 1], h / 2, rhs);
			tmp2P = RK4(tmp1P, h / 2, rhs);
			if (ismore_any(tmp2P, maxP) || isless_any(tmp2P, minP)) { // if second step is out of the set
				curP = V[V.size() - 1];
				if (pomitsya) {
					h /= 2;
					continue;
				}
				else {
					tmp2P = V_half[V_half.size() - 1];
					break;
				}
			}
			cure.V = tmp2P.V - curP.V;
			if (withOLP) { // check tolerance
				Spar = norm(cure.V) / (double((1ull << p) - 1));
				if (Spar > tol && std::abs(h) > 1e-16) {
					h /= 2;
					next = false; // recalculate point
					curP = V[V.size() - 1];
					++C1;
				}
				else if (Spar < tol / double(1ull << (p + 1))) {
					h *= 2; // not recalculate and make step greater
					++C2;
				}
			}
		}

		// filling all values
		curU.x = curP.x;
		cure.x = curP.x;
		curE.x = curP.x;
		curU.V = answer(curP.x, S.V); // it is possible to evaluate BAD VALUE in exact answer, but it doesn't affect anything
		cure.V = (double(1ull << p) / ((1ull << p) - 1)) * (tmp2P.V - curP.V);
		curE.V = curU.V - curP.V;


		if (curP.x != V[V.size() - 1].x) { // avoid repeating values
			U.push_back(curU);
			E.push_back(curE);
			e_appr.push_back(cure);
			V.push_back(curP);
			V_half.push_back(tmp2P);
			C1vec.push_back(C1);
			C2vec.push_back(C2);
			if (V.size() >= maxN) break;
		}
	}

	// return all trajectories
	std::vector <std::vector <point> > points;
	points.push_back(V); // numerical solution											all_data.first[0][i]
	points.push_back(E); // absolute error (if there is an analytical solution)			all_data.first[1][i]
	points.push_back(e_appr); // local error (appr)										all_data.first[2][i]
	points.push_back(U); // analytical solution											all_data.first[3][i]
	points.push_back(V_half); // numerical solution with half step						all_data.first[4][i]
	std::vector< std::vector <int> >C;
	C.push_back(C1vec); // count of h = h/2												all_data.second[0][i]
	C.push_back(C2vec); // cout of h = h*2												all_data.second[1][i]
	std::pair <std::vector < std::vector< point > >, std::vector <std::vector <int>>> ret(points, C);

	return ret;
}



