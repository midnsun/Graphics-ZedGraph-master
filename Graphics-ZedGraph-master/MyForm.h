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

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;



	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::Label^ label5;


	private: ZedGraph::ZedGraphControl^ zedGraphControl1;

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


	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ x_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ v2_i;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn9;
	private: System::Windows::Forms::DataGridView^ dataGridView3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn18;
private: System::Windows::Forms::ListBox^ listBox1;
























































	protected:
	private: System::ComponentModel::IContainer^ components;

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
			this->i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->x_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->v2_i = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridView3 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(637, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(142, 37);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Draw";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->i, this->x_i,
					this->v_i, this->v2_i, this->Column1, this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7
			});
			this->dataGridView1->Location = System::Drawing::Point(559, 30);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersVisible = false;
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->Size = System::Drawing::Size(554, 327);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->Visible = false;
			// 
			// i
			// 
			this->i->HeaderText = L"i";
			this->i->MinimumWidth = 6;
			this->i->Name = L"i";
			this->i->ReadOnly = true;
			this->i->Width = 50;
			// 
			// x_i
			// 
			this->x_i->HeaderText = L"x_i";
			this->x_i->MinimumWidth = 6;
			this->x_i->Name = L"x_i";
			this->x_i->ReadOnly = true;
			// 
			// v_i
			// 
			this->v_i->HeaderText = L"v_i";
			this->v_i->MinimumWidth = 6;
			this->v_i->Name = L"v_i";
			this->v_i->ReadOnly = true;
			// 
			// v2_i
			// 
			this->v2_i->HeaderText = L"v2_i";
			this->v2_i->Name = L"v2_i";
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"v_i - v2_i";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"OLP";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"h_(i-1)";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"C1";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"C2";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"u_i";
			this->Column6->Name = L"Column6";
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"abs(u_i - v_i)";
			this->Column7->Name = L"Column7";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 387);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"vmin";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(78, 379);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(48, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"-1000";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(154, 384);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"vmax";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(190, 379);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 20);
			this->textBox2->TabIndex = 6;
			this->textBox2->Text = L"1000";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(271, 382);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(13, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"h";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(286, 379);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(61, 20);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"0,01";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(468, 414);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(142, 34);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Zoom";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(190, 422);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(49, 20);
			this->textBox4->TabIndex = 13;
			this->textBox4->Text = L"1000";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(152, 425);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 12;
			this->label4->Text = L"v\'max";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(78, 422);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(48, 20);
			this->textBox5->TabIndex = 11;
			this->textBox5->Text = L"-1000";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(44, 425);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(31, 13);
			this->label5->TabIndex = 10;
			this->label5->Text = L"v\'min";
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(38, 30);
			this->zedGraphControl1->Margin = System::Windows::Forms::Padding(4);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(501, 327);
			this->zedGraphControl1->TabIndex = 0;
			this->zedGraphControl1->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl1_Load);
			this->zedGraphControl1->GraphPane->Title->Text = "";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(286, 422);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(61, 20);
			this->textBox6->TabIndex = 15;
			this->textBox6->Text = L"1e-5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(259, 425);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 13);
			this->label6->TabIndex = 16;
			this->label6->Text = L"eps";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(78, 463);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(48, 20);
			this->textBox7->TabIndex = 17;
			this->textBox7->Text = L"-1";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(48, 466);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 13);
			this->label7->TabIndex = 18;
			this->label7->Text = L"xmin";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(190, 463);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(49, 20);
			this->textBox8->TabIndex = 19;
			this->textBox8->Text = L"1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(157, 463);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(31, 13);
			this->label8->TabIndex = 20;
			this->label8->Text = L"xmax";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(397, 379);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(54, 20);
			this->textBox9->TabIndex = 21;
			this->textBox9->Text = L"13";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(399, 425);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(54, 20);
			this->textBox10->TabIndex = 22;
			this->textBox10->Text = L"7";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(376, 382);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(19, 13);
			this->label9->TabIndex = 23;
			this->label9->Text = L"u0";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(376, 427);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(21, 13);
			this->label10->TabIndex = 24;
			this->label10->Text = L"u\'0";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(286, 463);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(61, 20);
			this->textBox11->TabIndex = 25;
			this->textBox11->Text = L"1000000";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(250, 466);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Nmax";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(462, 466);
			this->checkBox1->Margin = System::Windows::Forms::Padding(2);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(47, 17);
			this->checkBox1->TabIndex = 29;
			this->checkBox1->Text = L"OLP";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(637, 370);
			this->button4->Margin = System::Windows::Forms::Padding(2);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(142, 37);
			this->button4->TabIndex = 30;
			this->button4->Text = L"Draw phase";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Location = System::Drawing::Point(508, 466);
			this->checkBox2->Margin = System::Windows::Forms::Padding(2);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(117, 17);
			this->checkBox2->TabIndex = 31;
			this->checkBox2->Text = L"Draw exact answer";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(637, 412);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 24);
			this->radioButton1->TabIndex = 32;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Test task";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtons_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(637, 441);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(108, 24);
			this->radioButton2->TabIndex = 33;
			this->radioButton2->Text = L"Main task 1";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtons_CheckedChanged);
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(637, 471);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(108, 24);
			this->radioButton3->TabIndex = 34;
			this->radioButton3->Text = L"Main task 2";
			this->radioButton3->UseVisualStyleBackColor = true;
			this->radioButton3->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButtons_CheckedChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(814, 397);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(138, 48);
			this->label13->TabIndex = 35;
			this->label13->Text = L"du/dx = -5/2 * u\r\nu(0) = u0";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(468, 370);
			this->button3->Margin = System::Windows::Forms::Padding(2);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(142, 37);
			this->button3->TabIndex = 14;
			this->button3->Text = L"Calculate";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(814, 398);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(422, 48);
			this->label14->TabIndex = 36;
			this->label14->Text = L"du/dx = ln(x+1)/(x^2 + 1) * u^2 + u - u^3 * sin(10x)\r\nu(0) = u0";
			this->label14->Visible = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(814, 397);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(272, 48);
			this->label15->TabIndex = 37;
			this->label15->Text = L"d2u/dx^2 + a * (u\')^2 + b * u = 0\r\nu(0) = u0, u\'(0) = u\'0";
			this->label15->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->Location = System::Drawing::Point(814, 371);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(55, 24);
			this->label16->TabIndex = 38;
			this->label16->Text = L"Task:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(934, 453);
			this->label17->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(13, 13);
			this->label17->TabIndex = 42;
			this->label17->Text = L"b";
			this->label17->Visible = false;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(955, 450);
			this->textBox13->Margin = System::Windows::Forms::Padding(2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(54, 20);
			this->textBox13->TabIndex = 41;
			this->textBox13->Text = L"1";
			this->textBox13->Visible = false;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(844, 450);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(61, 20);
			this->textBox14->TabIndex = 40;
			this->textBox14->Text = L"1";
			this->textBox14->Visible = false;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(827, 453);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(13, 13);
			this->label18->TabIndex = 39;
			this->label18->Text = L"a";
			this->label18->Visible = false;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4, this->dataGridViewTextBoxColumn5,
					this->dataGridViewTextBoxColumn6, this->dataGridViewTextBoxColumn7, this->dataGridViewTextBoxColumn8, this->dataGridViewTextBoxColumn9
			});
			this->dataGridView2->Location = System::Drawing::Point(559, 30);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersVisible = false;
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->Size = System::Drawing::Size(554, 327);
			this->dataGridView2->TabIndex = 43;
			this->dataGridView2->Visible = false;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"i";
			this->dataGridViewTextBoxColumn1->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			this->dataGridViewTextBoxColumn1->Width = 50;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"x_i";
			this->dataGridViewTextBoxColumn2->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"v_i";
			this->dataGridViewTextBoxColumn3->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"v2_i";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			// 
			// dataGridViewTextBoxColumn5
			// 
			this->dataGridViewTextBoxColumn5->HeaderText = L"v_i - v2_i";
			this->dataGridViewTextBoxColumn5->Name = L"dataGridViewTextBoxColumn5";
			// 
			// dataGridViewTextBoxColumn6
			// 
			this->dataGridViewTextBoxColumn6->HeaderText = L"OLP";
			this->dataGridViewTextBoxColumn6->Name = L"dataGridViewTextBoxColumn6";
			// 
			// dataGridViewTextBoxColumn7
			// 
			this->dataGridViewTextBoxColumn7->HeaderText = L"h_(i-1)";
			this->dataGridViewTextBoxColumn7->Name = L"dataGridViewTextBoxColumn7";
			// 
			// dataGridViewTextBoxColumn8
			// 
			this->dataGridViewTextBoxColumn8->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn8->Name = L"dataGridViewTextBoxColumn8";
			// 
			// dataGridViewTextBoxColumn9
			// 
			this->dataGridViewTextBoxColumn9->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn9->Name = L"dataGridViewTextBoxColumn9";
			// 
			// dataGridView3
			// 
			this->dataGridView3->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView3->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(12) {
				this->dataGridViewTextBoxColumn10,
					this->dataGridViewTextBoxColumn11, this->dataGridViewTextBoxColumn12, this->dataGridViewTextBoxColumn13, this->Column8, this->Column9,
					this->dataGridViewTextBoxColumn14, this->Column10, this->dataGridViewTextBoxColumn15, this->dataGridViewTextBoxColumn16, this->dataGridViewTextBoxColumn17,
					this->dataGridViewTextBoxColumn18
			});
			this->dataGridView3->Location = System::Drawing::Point(559, 30);
			this->dataGridView3->Name = L"dataGridView3";
			this->dataGridView3->RowHeadersVisible = false;
			this->dataGridView3->RowHeadersWidth = 51;
			this->dataGridView3->Size = System::Drawing::Size(554, 327);
			this->dataGridView3->TabIndex = 44;
			this->dataGridView3->Visible = false;
			// 
			// dataGridViewTextBoxColumn10
			// 
			this->dataGridViewTextBoxColumn10->HeaderText = L"i";
			this->dataGridViewTextBoxColumn10->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn10->Name = L"dataGridViewTextBoxColumn10";
			this->dataGridViewTextBoxColumn10->ReadOnly = true;
			this->dataGridViewTextBoxColumn10->Width = 50;
			// 
			// dataGridViewTextBoxColumn11
			// 
			this->dataGridViewTextBoxColumn11->HeaderText = L"x_i";
			this->dataGridViewTextBoxColumn11->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn11->Name = L"dataGridViewTextBoxColumn11";
			this->dataGridViewTextBoxColumn11->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn12
			// 
			this->dataGridViewTextBoxColumn12->HeaderText = L"v_i";
			this->dataGridViewTextBoxColumn12->MinimumWidth = 6;
			this->dataGridViewTextBoxColumn12->Name = L"dataGridViewTextBoxColumn12";
			this->dataGridViewTextBoxColumn12->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn13
			// 
			this->dataGridViewTextBoxColumn13->HeaderText = L"v2_i";
			this->dataGridViewTextBoxColumn13->Name = L"dataGridViewTextBoxColumn13";
			// 
			// Column8
			// 
			this->Column8->HeaderText = L"v\'_i";
			this->Column8->Name = L"Column8";
			// 
			// Column9
			// 
			this->Column9->HeaderText = L"v2\'_i";
			this->Column9->Name = L"Column9";
			// 
			// dataGridViewTextBoxColumn14
			// 
			this->dataGridViewTextBoxColumn14->HeaderText = L"v_i - v2_i";
			this->dataGridViewTextBoxColumn14->Name = L"dataGridViewTextBoxColumn14";
			// 
			// Column10
			// 
			this->Column10->HeaderText = L"v\'i - v\'2_i";
			this->Column10->Name = L"Column10";
			// 
			// dataGridViewTextBoxColumn15
			// 
			this->dataGridViewTextBoxColumn15->HeaderText = L"OLP";
			this->dataGridViewTextBoxColumn15->Name = L"dataGridViewTextBoxColumn15";
			// 
			// dataGridViewTextBoxColumn16
			// 
			this->dataGridViewTextBoxColumn16->HeaderText = L"h_(i-1)";
			this->dataGridViewTextBoxColumn16->Name = L"dataGridViewTextBoxColumn16";
			// 
			// dataGridViewTextBoxColumn17
			// 
			this->dataGridViewTextBoxColumn17->HeaderText = L"C1";
			this->dataGridViewTextBoxColumn17->Name = L"dataGridViewTextBoxColumn17";
			// 
			// dataGridViewTextBoxColumn18
			// 
			this->dataGridViewTextBoxColumn18->HeaderText = L"C2";
			this->dataGridViewTextBoxColumn18->Name = L"dataGridViewTextBoxColumn18";
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Output data" });
			this->listBox1->Location = System::Drawing::Point(1119, 30);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(322, 324);
			this->listBox1->TabIndex = 45;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1448, 502);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->dataGridView3);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->checkBox1);
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
			this->Controls->Add(this->label15);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private:
		double f1(double x) {
			return sin(x);
		}

		double f2(double x) {
			return sin(2 * x);
		}


	private: System::Void zedGraphControl1_Load(System::Object^ sender, System::EventArgs^ e) {
	}

		   bool can_draw = false;

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (can_draw) {

			GraphPane^ panel = zedGraphControl1->GraphPane;
			panel->CurveList->Clear();
			PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
			PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

			double xmin = Convert::ToDouble(textBox7->Text);
			double xmax = Convert::ToDouble(textBox8->Text);

			double h = Convert::ToDouble(textBox3->Text);


			double xmin_limit = xmin - 0.1;
			double xmax_limit = xmax + 0.1;

			dataGridView1->Visible = false;
			dataGridView2->Visible = false;
			int countC1, countC2;
			countC1 = countC2 = 0;

			double h_max, h_min;
			h_max = 0;
			h_min = 10000000000;
			double x_min_h, x_max_h;
			x_min_h = x_max_h = 0;
			double max_glob_error = 0;
			double x_max_glob = 0;
			double max_olp = 0;

			int i = 0;
			int count_it = all_data.first[0].size();
			if (num_rhs == 1) {
				dataGridView1->Visible = true;
				dataGridView1->Rows->Clear();

				for (i = 0; i < count_it; ++i)
				{

					f1_list->Add(all_data.first[0][i].x, all_data.first[0][i].V[0]);
					f2_list->Add(all_data.first[0][i].x, all_data.first[3][i].V[0]);

					dataGridView1->Rows->Add();

					dataGridView1->Rows[i]->Cells[0]->Value = i;
					dataGridView1->Rows[i]->Cells[1]->Value = all_data.first[0][i].x;
					dataGridView1->Rows[i]->Cells[2]->Value = all_data.first[0][i].V[0];
					dataGridView1->Rows[i]->Cells[3]->Value = all_data.first[4][i].V[0];
					dataGridView1->Rows[i]->Cells[4]->Value = all_data.first[4][i].V[0] - all_data.first[0][i].V[0];
					if (abs(max_olp) < abs(all_data.first[2][i].V[0])) max_olp = all_data.first[2][i].V[0];
					dataGridView1->Rows[i]->Cells[5]->Value = all_data.first[2][i].V[0];
					if (i == 0) dataGridView1->Rows[i]->Cells[6]->Value = 0;
					else {
						dataGridView1->Rows[i]->Cells[6]->Value = all_data.first[0][i].x - all_data.first[0][i - 1].x;
						if ((all_data.first[0][i].x - all_data.first[0][i - 1].x) > h_max) {
							x_max_h = all_data.first[0][i].x;
							h_max = (all_data.first[0][i].x - all_data.first[0][i - 1].x);
						}
						if ((all_data.first[0][i].x - all_data.first[0][i - 1].x) < h_min) {
							x_min_h = all_data.first[0][i].x;
							h_min = (all_data.first[0][i].x - all_data.first[0][i - 1].x);
						}
					}
					dataGridView1->Rows[i]->Cells[7]->Value = all_data.second[0][i];
					countC1 += all_data.second[0][i];
					dataGridView1->Rows[i]->Cells[8]->Value = all_data.second[1][i];
					countC2 += all_data.second[1][i];
					dataGridView1->Rows[i]->Cells[9]->Value = all_data.first[3][i].V[0];
					dataGridView1->Rows[i]->Cells[10]->Value = abs(all_data.first[3][i].V[0] - all_data.first[0][i].V[0]);
					if (abs(all_data.first[3][i].V[0] - all_data.first[0][i].V[0]) > (abs(max_glob_error))) {
						x_max_glob = all_data.first[0][i].x;
						max_glob_error = all_data.first[3][i].V[0] - all_data.first[0][i].V[0];
					}
				}
			}

			if (num_rhs == 2) {
				dataGridView2->Visible = true;
				dataGridView2->Rows->Clear();
				for (i = 0; i < count_it; ++i)
				{
					f1_list->Add(all_data.first[0][i].x, all_data.first[0][i].V[0]);
					dataGridView2->Rows->Add();

					dataGridView2->Rows[i]->Cells[0]->Value = i;
					dataGridView2->Rows[i]->Cells[1]->Value = all_data.first[0][i].x;
					dataGridView2->Rows[i]->Cells[2]->Value = all_data.first[0][i].V[0];
					dataGridView2->Rows[i]->Cells[3]->Value = all_data.first[4][i].V[0];
					dataGridView2->Rows[i]->Cells[4]->Value = all_data.first[4][i].V[0] - all_data.first[0][i].V[0];
					if (abs(max_olp) < abs(all_data.first[2][i].V[0])) max_olp = all_data.first[2][i].V[0];
					dataGridView2->Rows[i]->Cells[5]->Value = all_data.first[2][i].V[0];
					if (i == 0) dataGridView2->Rows[i]->Cells[6]->Value = 0;
					else {
						dataGridView2->Rows[i]->Cells[6]->Value = all_data.first[0][i].x - all_data.first[0][i - 1].x;
						if ((all_data.first[0][i].x - all_data.first[0][i - 1].x) > h_max) {
							x_max_h = all_data.first[0][i].x;
							h_max = (all_data.first[0][i].x - all_data.first[0][i - 1].x);
						}
						if ((all_data.first[0][i].x - all_data.first[0][i - 1].x) < h_min) {
							x_min_h = all_data.first[0][i].x;
							h_min = (all_data.first[0][i].x - all_data.first[0][i - 1].x);
						}
					}
					
					dataGridView2->Rows[i]->Cells[7]->Value = all_data.second[0][i];
					countC1 += all_data.second[0][i];
					dataGridView2->Rows[i]->Cells[8]->Value = all_data.second[1][i];
					countC2 += all_data.second[1][i];
				}
			}

			LineItem Curve1 = panel->AddCurve("numerical solution", f1_list, Color::Red, SymbolType::Plus);
			if ((num_rhs == 1) && (checkBox2->Checked == true)) LineItem Curve2 = panel->AddCurve("analytical solution", f2_list, Color::Blue, SymbolType::Circle);

			listBox1->Items->Clear();
			listBox1->Items->Add("n = " + (count_it - 1).ToString());
			listBox1->Items->Add("b - x_n = " + (xmax - all_data.first[0][count_it - 1].x).ToString());
			listBox1->Items->Add("max olp = " + abs(max_olp).ToString());
			if (checkBox1->Checked) {
				listBox1->Items->Add("h_max = " + h_max.ToString()); listBox1->Items->Add("in x = " + x_max_h.ToString());
				listBox1->Items->Add("h_min = " + h_min.ToString()); listBox1->Items->Add("in x = " + x_min_h.ToString());
				listBox1->Items->Add("number of step * 2 = " + countC2.ToString());
				listBox1->Items->Add("number of step / 2 = " + countC1.ToString());
			}
			if (num_rhs == 1) {
				listBox1->Items->Add("max absolute error = " + abs(max_glob_error).ToString()); listBox1->Items->Add("in x = " + x_max_glob.ToString());
			}
			if (panel->ZoomStack != nullptr)
			{
				panel->ZoomStack->Clear();
			}
			panel->XAxis->Title->Text = "X Axis";
			panel->YAxis->Title->Text = "U Axis";
			panel->XAxis->Scale->Min = xmin_limit;
			panel->XAxis->Scale->Max = xmax_limit;
			panel->YAxis->Scale->MinAuto = true;
			panel->YAxis->Scale->MaxAuto = true;


			zedGraphControl1->AxisChange();
			zedGraphControl1->Refresh();
			zedGraphControl1->Invalidate();			
		}
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {

		GraphPane^ panel = zedGraphControl1->GraphPane;

		double xmin = Convert::ToDouble(textBox7->Text);
		double xmax = Convert::ToDouble(textBox8->Text);

		if (panel->ZoomStack != nullptr)
		{
			panel->ZoomStack->Clear();
		}

		panel->XAxis->Scale->Min = xmin;
		panel->XAxis->Scale->Max = xmax;
		panel->YAxis->Scale->MinAuto = true;
		panel->YAxis->Scale->MaxAuto = true;


		zedGraphControl1->AxisChange();
		zedGraphControl1->Refresh();
		zedGraphControl1->Invalidate();

	}

int num_rhs = 1;
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

		int maxN = Convert::ToInt32(textBox11->Text);//Nmax
		size_t N = 2;
		point S(N);
		double h;
		double tol;
		point minP(N), maxP(N);
		bool withOLP = checkBox1->Checked;

		S.x = 0.0;
		S.V[0] = Convert::ToDouble(textBox9->Text);//u0
		S.V[1] = Convert::ToDouble(textBox10->Text);//u'0
		h = Convert::ToDouble(textBox3->Text);//h
		tol = Convert::ToDouble(textBox6->Text);//eps
		minP.x = Convert::ToDouble(textBox7->Text); //xmin
		minP.V[0] = Convert::ToDouble(textBox1->Text);//vmin
		minP.V[1] = Convert::ToDouble(textBox5->Text);//v'min
		maxP.x = Convert::ToDouble(textBox8->Text);//xmax
		maxP.V[0] = Convert::ToDouble(textBox2->Text);//vmax
		maxP.V[1] = Convert::ToDouble(textBox4->Text);//v'max

		double val_a, val_b;
		val_a = Convert::ToDouble(textBox14->Text);
		val_b = Convert::ToDouble(textBox13->Text);

		all_data = solve_ivp(num_rhs, maxN, S, h, tol, minP, maxP, withOLP, val_a, val_b);

		can_draw = true;
	}


	private: System::Void radioButtons_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		zedGraphControl1->AxisChange();
		zedGraphControl1->Invalidate();

		can_draw = false;
		dataGridView1->Visible = false;
		dataGridView2->Visible = false;
		dataGridView3->Visible = false;
		label13->Visible = false;
		label14->Visible = false;
		label15->Visible = false;
		this->textBox13->Visible = false;
		this->textBox14->Visible = false;
		this->label18->Visible = false;
		this->label17->Visible = false;
		this->button4->Visible = false;
		this->button1->Visible = false;
		this->checkBox2->Visible = false;
		this->checkBox2->Checked = false;
		if (radioButton1->Checked) {
			label13->Visible = true;
			num_rhs = 1;
			this->button1->Visible = true;
			this->checkBox2->Visible = true;
		}
		if (radioButton2->Checked) {
			label14->Visible = true;
			this->button1->Visible = true;
			num_rhs = 2;
		}
		if (radioButton3->Checked) {
			label15->Visible = true;
			num_rhs = 3;
			this->button4->Visible = true;
			this->textBox13->Visible = true;
			this->textBox14->Visible = true;
			this->label18->Visible = true;
			this->label17->Visible = true;
		}
	}


private: System::Void textBox7_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	if (can_draw) {
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		PointPairList^ f2_list = gcnew ZedGraph::PointPairList();

		double xmin = Convert::ToDouble(textBox7->Text);
		double xmax = Convert::ToDouble(textBox8->Text);

		double xmin_limit = xmin - 0.1;
		double xmax_limit = xmax + 0.1;

		dataGridView1->Visible = false;
		dataGridView2->Visible = false;

		dataGridView3->Visible = true;
		int i = 0;
		double max_olp = 0;
		dataGridView3->Rows->Clear();
		int count_it = all_data.first[0].size();

		int countC1, countC2;
		countC1 = countC2 = 0;

		double h_max, h_min;
		h_max = 0;
		h_min = 10000000000;
		double x_min_h, x_max_h;
		x_min_h = x_max_h = 0;
		double max_glob_error = 0;
		double x_max_glob = 0;

		for (i = 0; i < count_it; ++i)
		{
			f1_list->Add(all_data.first[0][i].x, all_data.first[0][i].V[0]);
			f2_list->Add(all_data.first[0][i].x, all_data.first[0][i].V[1]);
			dataGridView3->Rows->Add();
			dataGridView3->Rows[i]->Cells[0]->Value = i;
			dataGridView3->Rows[i]->Cells[1]->Value = all_data.first[0][i].x;
			dataGridView3->Rows[i]->Cells[2]->Value = all_data.first[0][i].V[0];
			dataGridView3->Rows[i]->Cells[3]->Value = all_data.first[4][i].V[0];
			dataGridView3->Rows[i]->Cells[4]->Value = all_data.first[0][i].V[1];
			dataGridView3->Rows[i]->Cells[5]->Value = all_data.first[4][i].V[1];
			dataGridView3->Rows[i]->Cells[6]->Value = all_data.first[4][i].V[0] - all_data.first[0][i].V[0];
			dataGridView3->Rows[i]->Cells[7]->Value = all_data.first[4][i].V[1] - all_data.first[0][i].V[1];
			if (abs(max_olp) < abs(all_data.first[2][i].V[0])) max_olp = all_data.first[2][i].V[0];
			dataGridView3->Rows[i]->Cells[8]->Value = all_data.first[2][i].V[0];
			if (i == 0) dataGridView3->Rows[i]->Cells[9]->Value = 0;
			else {
				dataGridView3->Rows[i]->Cells[9]->Value = all_data.first[0][i].x - all_data.first[0][i - 1].x;
				if ((all_data.first[0][i].x - all_data.first[0][i - 1].x) > h_max) {
					x_max_h = all_data.first[0][i].x;
					h_max = (all_data.first[0][i].x - all_data.first[0][i - 1].x);
				}
				if ((all_data.first[0][i].x - all_data.first[0][i - 1].x) < h_min) {
					x_min_h = all_data.first[0][i].x;
					h_min = (all_data.first[0][i].x - all_data.first[0][i - 1].x);
				}
			}
			dataGridView3->Rows[i]->Cells[10]->Value = all_data.second[0][i];
			countC1 += all_data.second[0][i];
			dataGridView3->Rows[i]->Cells[11]->Value = all_data.second[1][i];
			countC2 += all_data.second[1][i];
		}
		LineItem Curve1 = panel->AddCurve("v numerical solution", f1_list, Color::Red, SymbolType::Plus);
		LineItem Curve2 = panel->AddCurve("v' numerical solution", f2_list, Color::Green, SymbolType::Circle);

		listBox1->Items->Clear();
		listBox1->Items->Add("n = " + (count_it - 1).ToString());
		listBox1->Items->Add("b - x_n = " + (xmax - all_data.first[0][count_it - 1].x).ToString());
		listBox1->Items->Add("max olp = " + abs(max_olp).ToString());
		if (checkBox1->Checked) {
			listBox1->Items->Add("h_max = " + h_max.ToString()); listBox1->Items->Add("in x = " + x_max_h.ToString());
				listBox1->Items->Add("h_min = " + h_min.ToString()); listBox1->Items->Add("in x = " + x_min_h.ToString());
			listBox1->Items->Add("number of step * 2 = " + countC2.ToString());
			listBox1->Items->Add("number of step / 2 = " + countC1.ToString());
		}
		if (num_rhs == 1) {
			listBox1->Items->Add("max absolute error = " + abs(max_glob_error).ToString());
			listBox1->Items->Add("in x = " + x_max_glob.ToString());
		}

		if (panel->ZoomStack != nullptr)
		{
			panel->ZoomStack->Clear();
		}

		panel->XAxis->Title->Text = "X Axis";
		panel->YAxis->Title->Text = "U Axis";

		panel->XAxis->Scale->Min = xmin_limit;
		panel->XAxis->Scale->Max = xmax_limit;
		panel->YAxis->Scale->MinAuto = true;
		panel->YAxis->Scale->MaxAuto = true;


		zedGraphControl1->AxisChange();
		zedGraphControl1->Refresh();
		zedGraphControl1->Invalidate();
	}
}
};
}
