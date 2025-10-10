#pragma once
#include <vector>
#include <iostream>
#include <stdexcept>
#include <cmath>
#include <fstream>
#include <string>
#include <iomanip>
#include <limits>
#include <utility>

struct point {
	double x;
	std::vector<double> V;
	point(int N);
	point(const point& p);
	point(point&& p);
	point& operator= (const point& p);
	point& operator= (point&& p);
};

std::pair <std::vector < std::vector< point > >, std::vector <std::vector <int>>> solve_ivp(int type, int maxN, const point& S, double h, double tol, const point& minP, const point& maxP, bool withOLP, double val_a, double val_b);