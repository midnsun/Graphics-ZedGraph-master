#pragma once
#include <math.h>
#include "solve_ivp.h"

namespace Graph {
	std::pair <std::vector < std::vector< point > >, std::vector <std::vector <int>>> all_data;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  X;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  F_2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label5;


	private: ZedGraph::ZedGraphControl^ zedGraphControl1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox2;







	protected:
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->X = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->F_2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(844, 447);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(189, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->X, this->F_1,
					this->F_2
			});
			this->dataGridView1->Location = System::Drawing::Point(745, 37);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(365, 402);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// X
			// 
			this->X->HeaderText = L"X";
			this->X->MinimumWidth = 6;
			this->X->Name = L"X";
			this->X->ReadOnly = true;
			this->X->Width = 50;
			// 
			// F_1
			// 
			this->F_1->HeaderText = L"F_1";
			this->F_1->MinimumWidth = 6;
			this->F_1->Name = L"F_1";
			this->F_1->ReadOnly = true;
			this->F_1->Width = 125;
			// 
			// F_2
			// 
			this->F_2->HeaderText = L"F_2";
			this->F_2->MinimumWidth = 6;
			this->F_2->Name = L"F_2";
			this->F_2->ReadOnly = true;
			this->F_2->Width = 125;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(61, 476);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 16);
			this->label1->TabIndex = 3;
			this->label1->Text = L"vmin";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(104, 467);
			this->textBox1->Margin = System::Windows::Forms::Padding(4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(63, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"-1000";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(206, 473);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(39, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"vmax";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(253, 467);
			this->textBox2->Margin = System::Windows::Forms::Padding(4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(64, 22);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1000";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(360, 473);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 16);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(382, 467);
			this->textBox3->Margin = System::Windows::Forms::Padding(4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(80, 22);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,001";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(844, 557);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(189, 42);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(253, 520);
			this->textBox4->Margin = System::Windows::Forms::Padding(4);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(64, 22);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1000";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(203, 523);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 16);
			this->label4->TabIndex = 12;
			this->label4->Text = L"v\'max";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(104, 520);
			this->textBox5->Margin = System::Windows::Forms::Padding(4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(63, 22);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"-1000";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 523);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(38, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"v\'min";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(51, 37);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(5);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(668, 402);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(624, 500);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(189, 45);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(382, 520);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(80, 22);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"1e-5";
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox6_TextChanged_1);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(345, 523);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(30, 16);
			this->label6->TabIndex = 16;
			this->label6->Text = L"eps";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(104, 570);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(63, 22);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"-1";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(64, 573);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(34, 16);
			this->label7->TabIndex = 18;
			this->label7->Text = L"xmin";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(253, 570);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(64, 22);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"1";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(209, 570);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(38, 16);
			this->label8->TabIndex = 20;
			this->label8->Text = L"xmax";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(529, 467);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(71, 22);
			this->textBox9->TabIndex = 21;
			this->textBox9->Text = L"13";
			this->textBox9->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox9_TextChanged);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(532, 523);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(71, 22);
			this->textBox10->TabIndex = 22;
			this->textBox10->Text = L"7";
			this->textBox10->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox10_TextChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(502, 470);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 16);
			this->label9->TabIndex = 23;
			this->label9->Text = L"u0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(502, 526);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 16);
			this->label10->TabIndex = 24;
			this->label10->Text = L"u\'0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(382, 570);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(80, 22);
			this->textBox11->TabIndex = 25;
			this->textBox11->Text = L"1000000";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(334, 573);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(42, 16);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Nmax";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(532, 570);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(71, 22);
			this->textBox12->TabIndex = 27;
			this->textBox12->Text = L"0";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(494, 573);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(32, 16);
			this->label12->TabIndex = 28;
			this->label12->Text = L"task";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(624, 572);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(55, 20);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"OLP";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(844, 500);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(189, 45);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Draw phase";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(685, 572);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(141, 20);
			this->checkBox2->TabIndex = 31;
			this->checkBox2->Text = L"Draw exact answer";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1144, 612);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->zedGraphControl1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: 
		double f1(double x){
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		// ��������, ��� ���� ������
		double xmin = Convert::ToDouble(textBox1->Text);
		double xmax = Convert::ToDouble(textBox2->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;
/*
		double ymin_limit = -1.0;
		double ymax_limit = 100.0;
*/
		// ������ �����
		dataGridView1->Rows->Clear();
		for (size_t i = 0; i < all_data.first[0].size(); ++i)
		{
			//���������� �� ������
			f1_list->Add(all_data.first[0][i].x, all_data.first[0][i].V[0]);
			f2_list->Add(all_data.first[0][i].x, all_data.first[0][i].V[1]);
			//������ � �������
			dataGridView1->Rows->Add();
			dataGridView1->Rows[i]->Cells[0]->Value = all_data.first[0][i].x;
			dataGridView1->Rows[i]->Cells[1]->Value = floor(all_data.first[0][i].V[0] * 1000) / 1000;
			dataGridView1->Rows[i]->Cells[2]->Value = floor(all_data.first[0][i].V[1] * 1000) / 1000;
		}
		LineItem Curve1 = panel->AddCurve("V1(x)", f1_list, Color::Blue, SymbolType::None);
		LineItem Curve2 = panel->AddCurve("V2(x)", f2_list, Color::Red, SymbolType::None);

		// ������������� ������������ ��� �������� �� ��� X
		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;

		// ������������� ������������ ��� �������� �� ��� Y
		//panel->YAxis->Scale->Min = ymin_limit;
		//panel->YAxis->Scale->Max = ymax_limit;

		// �������� ����� AxisChange (), ����� �������� ������ �� ����. 
		// � ��������� ������ �� ������� ����� �������� ������ ����� �������, 
		// ������� ��������� � ��������� �� ����, ������������� �� ���������
		zedGraphControl1->AxisChange();
		// ��������� ������
		zedGraphControl1->Invalidate();
	}

	//private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

	//	GraphPane^ panel = zedGraphControl1->GraphPane;
	//	panel->CurveList->Clear();
	//	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	//	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

	//	// Èíòåðâàë, ãäå åñòü äàííûå
	//	double xmin = Convert::ToDouble(textBox1->Text);
	//	double xmax = Convert::ToDouble(textBox2->Text);

	//	double h = Convert::ToDouble(textBox3->Text);


	//	double xmin_limit = xmin - 0.1;
	//	double xmax_limit = xmax + 0.1;
	//	/*
	//			double ymin_limit = -1.0;
	//			double ymax_limit = 100.0;
	//	*/
	//	// Ñïèñîê òî÷åê
	//	int i = 0;
	//	dataGridView1->Rows->Clear();
	//	for (double x = xmin; x <= xmax; x += h)
	//	{
	//		//Äîáàâëåíèå íà ãðàôèê
	//		f1_list->Add(x, f1(x));
	//		f2_list->Add(x, f2(x));
	//		//Ïå÷àòü â òàáëèöó
	//		dataGridView1->Rows->Add();
	//		dataGridView1->Rows[i]->Cells[0]->Value = x;
	//		dataGridView1->Rows[i]->Cells[1]->Value = floor(f1(x) * 1000) / 1000;
	//		dataGridView1->Rows[i]->Cells[2]->Value = floor(f2(x) * 1000) / 1000;
	//		i++;
	//	}
	//	LineItem Curve1 = panel->AddCurve("F1(x)", f1_list, Color::Red, SymbolType::Plus);
	//	LineItem Curve2 = panel->AddCurve("F2(x)", f2_list, Color::Blue, SymbolType::None);

	//	// Óñòàíàâëèâàåì èíòåðåñóþùèé íàñ èíòåðâàë ïî îñè X
	//	panel->XAxis->Scale->Min = xmin_limit;
	//	panel->XAxis->Scale->Max = xmax_limit;
	//	/*
	//			panel->YAxis->Scale->Min = ymin_limit;
	//			panel->YAxis->Scale->Max = ymax_limit;
	//	*/
	//	zedGraphControl1->AxisChange();
	//	zedGraphControl1->Invalidate();

	//}
	private: System::Void zedGraphControl1_Load(System::Object^  sender, System::EventArgs^  e) {
	}

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	
	GraphPane^ panel = zedGraphControl1->GraphPane;
	double xmin = Convert::ToDouble(textBox5->Text);
	double xmax = Convert::ToDouble(textBox4->Text);
	// ������������� ������������ ��� �������� �� ��� X
	panel->XAxis->Scale->Min = xmin;
	panel->XAxis->Scale->Max = xmax;

	// �������� ����� AxisChange (), ����� �������� ������ �� ����. 
	// � ��������� ������ �� ������� ����� �������� ������ ����� �������, 
	// ������� ��������� � ��������� �� ����, ������������� �� ���������
	zedGraphControl1->AxisChange();
	// ��������� ������
	zedGraphControl1->Invalidate();

}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	int type = 0;
	int maxN = 1'000'000;
	size_t N = 2;
	point S(N);
	double h;
	double tol;
	point minP(N), maxP(N);
	bool withOLP = false;
	
	S.x = 0.0;
	S.V[0] = 7.0;
	S.V[1] = 13.0;
	h = Convert::ToDouble(textBox3->Text);;
	tol = 1e-5;
	minP.x = -0.1;
	minP.V[0] = -1000.0;
	minP.V[1] = -1000.0;
	maxP.x = 0.1;
	maxP.V[0] = 1000.0;
	maxP.V[1] = 1000.0;

	all_data = solve_ivp(type, maxN, S, h, tol, minP, maxP, withOLP);

}
};
}
