#pragma once
#include "Bank.h"
#include <msclr/marshal_cppstd.h>

namespace BankSystem {

	using namespace msclr::interop;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class AdminForm : public System::Windows::Forms::Form
	{
	public:
		AdminForm(void)
		{
			InitializeComponent();
			auto& bank = Bank::Instance();
			this->button1_Click(this->button1, System::EventArgs::Empty);
			//text box
			this->textBox1->Text = marshal_as<System::String^>(bank.nextID());
			this->textBox1->ForeColor = System::Drawing::Color::Silver;
			// combo box
			for (auto& u : bank.users)
				this->comboBox1->Items->Add(marshal_as<System::String^>(u.id)),
				this->comboBox2->Items->Add(marshal_as<String^>(u.id));
		}

	protected:
		~AdminForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Button^ button7;


	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ pn_show;
	private: System::Windows::Forms::DataGridView^ dataGridView1;







	private: System::Windows::Forms::Panel^ pn_find;
	private: System::Windows::Forms::Panel^ pn_trans;














	private: System::Windows::Forms::GroupBox^ groupBox4;



	private: System::Windows::Forms::GroupBox^ groupBox5;












	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;


	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;






















































private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ button5;
private: System::Windows::Forms::ComboBox^ comboBox2;





private: System::Windows::Forms::GroupBox^ groupBox1;
private: System::Windows::Forms::Button^ button8;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::Label^ label2;
private: System::Windows::Forms::TextBox^ textBox1;
private: System::Windows::Forms::Panel^ pn_add;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::DataGridView^ dataGridView2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
private: System::Windows::Forms::Label^ label13;



































	private:
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle13 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle14 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle15 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle16 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pn_show = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pn_find = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->pn_trans = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pn_add = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pn_show->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->pn_find->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->pn_trans->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->tableLayoutPanel4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->pn_add->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->button7);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(4);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1009, 83);
			this->panel1->TabIndex = 0;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Lime;
			this->label13->Location = System::Drawing::Point(3, 51);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(129, 29);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Hi, Admin";
			// 
			// button7
			// 
			this->button7->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Font = (gcnew System::Drawing::Font(L"Tahoma", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->ForeColor = System::Drawing::Color::Black;
			this->button7->Location = System::Drawing::Point(891, 21);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(106, 37);
			this->button7->TabIndex = 1;
			this->button7->Text = L"Log out";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &AdminForm::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Crimson;
			this->label1->Location = System::Drawing::Point(446, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(161, 58);
			this->label1->TabIndex = 0;
			this->label1->Text = L"BANK";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 83);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1009, 72);
			this->panel2->TabIndex = 1;
			// 
			// button4
			// 
			this->button4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button4->BackColor = System::Drawing::Color::White;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(758, 0);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(251, 72);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Show Transactions";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &AdminForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(488, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(274, 72);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Find User";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &AdminForm::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::White;
			this->button2->Dock = System::Windows::Forms::DockStyle::Left;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(225, 0);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(264, 72);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Add New User";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &AdminForm::button2_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Lime;
			this->button1->Dock = System::Windows::Forms::DockStyle::Left;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(0, 0);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(225, 72);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Show All Users";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &AdminForm::button1_Click);
			// 
			// pn_show
			// 
			this->pn_show->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_show->Controls->Add(this->dataGridView1);
			this->pn_show->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_show->Location = System::Drawing::Point(0, 155);
			this->pn_show->Name = L"pn_show";
			this->pn_show->Size = System::Drawing::Size(1009, 462);
			this->pn_show->TabIndex = 2;
			// 
			// dataGridView1
			// 
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::SteelBlue;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column5
			});
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EnableHeadersVisualStyles = false;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			dataGridViewCellStyle13->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle13->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle13->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle13->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle13->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle13->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle13->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle13;
			this->dataGridView1->RowTemplate->Height = 30;
			this->dataGridView1->Size = System::Drawing::Size(1009, 462);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminForm::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"ID";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Name";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Phone";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Balance";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			// 
			// pn_find
			// 
			this->pn_find->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_find->Controls->Add(this->groupBox5);
			this->pn_find->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_find->Location = System::Drawing::Point(0, 155);
			this->pn_find->Name = L"pn_find";
			this->pn_find->Size = System::Drawing::Size(1009, 462);
			this->pn_find->TabIndex = 4;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button13);
			this->groupBox5->Controls->Add(this->tableLayoutPanel3);
			this->groupBox5->Controls->Add(this->tableLayoutPanel2);
			this->groupBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(0, 0);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(1009, 462);
			this->groupBox5->TabIndex = 3;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L" Find User ";
			// 
			// button13
			// 
			this->button13->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button13->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button13->Location = System::Drawing::Point(762, 345);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(141, 72);
			this->button13->TabIndex = 5;
			this->button13->Text = L"Remove";
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Visible = false;
			this->button13->Click += gcnew System::EventHandler(this, &AdminForm::button13_Click);
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 3;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				30.76923F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				69.23077F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				181)));
			this->tableLayoutPanel3->Controls->Add(this->label12, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->button9, 2, 0);
			this->tableLayoutPanel3->Controls->Add(this->comboBox1, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(135, 34);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(792, 42);
			this->tableLayoutPanel3->TabIndex = 4;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gold;
			this->label12->Dock = System::Windows::Forms::DockStyle::Left;
			this->label12->Location = System::Drawing::Point(0, 5);
			this->label12->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(177, 32);
			this->label12->TabIndex = 3;
			this->label12->Text = L"Search By ID:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button9->BackColor = System::Drawing::Color::Green;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(627, 3);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(162, 36);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Find";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &AdminForm::button9_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(191, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(417, 37);
			this->comboBox1->TabIndex = 4;
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.5F)));
			this->tableLayoutPanel2->Controls->Add(this->textBox7, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox8, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox9, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label11, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox10, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(12, 173);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 4;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Absolute, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(679, 172);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// textBox7
			// 
			this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox7->Location = System::Drawing::Point(257, 132);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(419, 36);
			this->textBox7->TabIndex = 7;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gold;
			this->label8->Dock = System::Windows::Forms::DockStyle::Right;
			this->label8->Location = System::Drawing::Point(139, 134);
			this->label8->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(115, 33);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Balance:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox8
			// 
			this->textBox8->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox8->Location = System::Drawing::Point(257, 89);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(419, 36);
			this->textBox8->TabIndex = 5;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gold;
			this->label9->Dock = System::Windows::Forms::DockStyle::Right;
			this->label9->Location = System::Drawing::Point(157, 91);
			this->label9->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(97, 33);
			this->label9->TabIndex = 4;
			this->label9->Text = L"Phone:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox9
			// 
			this->textBox9->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox9->Location = System::Drawing::Point(257, 46);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(419, 36);
			this->textBox9->TabIndex = 3;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gold;
			this->label10->Dock = System::Windows::Forms::DockStyle::Right;
			this->label10->Location = System::Drawing::Point(162, 48);
			this->label10->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(92, 33);
			this->label10->TabIndex = 2;
			this->label10->Text = L"Name:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Gold;
			this->label11->Dock = System::Windows::Forms::DockStyle::Right;
			this->label11->Location = System::Drawing::Point(202, 5);
			this->label11->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(52, 33);
			this->label11->TabIndex = 0;
			this->label11->Text = L"ID:";
			this->label11->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox10
			// 
			this->textBox10->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox10->Location = System::Drawing::Point(257, 3);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(419, 36);
			this->textBox10->TabIndex = 1;
			// 
			// pn_trans
			// 
			this->pn_trans->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_trans->Controls->Add(this->groupBox4);
			this->pn_trans->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_trans->Location = System::Drawing::Point(0, 155);
			this->pn_trans->Name = L"pn_trans";
			this->pn_trans->Size = System::Drawing::Size(1009, 462);
			this->pn_trans->TabIndex = 5;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->panel3);
			this->groupBox4->Controls->Add(this->tableLayoutPanel4);
			this->groupBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox4->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox4->Location = System::Drawing::Point(0, 0);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(1009, 462);
			this->groupBox4->TabIndex = 2;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Show Transactions ";
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->dataGridView2);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(3, 93);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1003, 366);
			this->panel3->TabIndex = 9;
			// 
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle14->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle14->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle14->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle14->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle14->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle14->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle14->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle14;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			dataGridViewCellStyle15->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle15->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle15->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle15->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle15->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle15->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle15->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle15;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->Location = System::Drawing::Point(0, 0);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle16->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle16->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle16->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle16->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle16->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle16->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle16->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle16;
			this->dataGridView2->RowTemplate->Height = 30;
			this->dataGridView2->Size = System::Drawing::Size(1003, 366);
			this->dataGridView2->TabIndex = 1;
			// 
			// dataGridViewTextBoxColumn1
			// 
			this->dataGridViewTextBoxColumn1->HeaderText = L"ID";
			this->dataGridViewTextBoxColumn1->Name = L"dataGridViewTextBoxColumn1";
			this->dataGridViewTextBoxColumn1->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn2
			// 
			this->dataGridViewTextBoxColumn2->HeaderText = L"Type";
			this->dataGridViewTextBoxColumn2->Name = L"dataGridViewTextBoxColumn2";
			this->dataGridViewTextBoxColumn2->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn3
			// 
			this->dataGridViewTextBoxColumn3->HeaderText = L"Amount";
			this->dataGridViewTextBoxColumn3->Name = L"dataGridViewTextBoxColumn3";
			this->dataGridViewTextBoxColumn3->ReadOnly = true;
			// 
			// dataGridViewTextBoxColumn4
			// 
			this->dataGridViewTextBoxColumn4->HeaderText = L"To User";
			this->dataGridViewTextBoxColumn4->Name = L"dataGridViewTextBoxColumn4";
			this->dataGridViewTextBoxColumn4->ReadOnly = true;
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				38.94081F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				61.05919F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				194)));
			this->tableLayoutPanel4->Controls->Add(this->label7, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->button5, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->comboBox2, 1, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(59, 39);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(891, 42);
			this->tableLayoutPanel4->TabIndex = 8;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gold;
			this->label7->Dock = System::Windows::Forms::DockStyle::Left;
			this->label7->Location = System::Drawing::Point(0, 5);
			this->label7->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(269, 32);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Transactions Of User:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(726, 3);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(162, 36);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Find";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &AdminForm::button5_Click_1);
			// 
			// comboBox2
			// 
			this->comboBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->comboBox2->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Location = System::Drawing::Point(274, 3);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(419, 37);
			this->comboBox2->TabIndex = 4;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button8);
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1009, 462);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L" Add New User ";
			// 
			// button8
			// 
			this->button8->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->button8->BackColor = System::Drawing::Color::Green;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->Location = System::Drawing::Point(835, 213);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(141, 72);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Add";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &AdminForm::button8_Click_1);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 2;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.5F)));
			this->tableLayoutPanel1->Controls->Add(this->textBox5, 1, 4);
			this->tableLayoutPanel1->Controls->Add(this->label6, 0, 4);
			this->tableLayoutPanel1->Controls->Add(this->textBox4, 1, 3);
			this->tableLayoutPanel1->Controls->Add(this->label5, 0, 3);
			this->tableLayoutPanel1->Controls->Add(this->textBox3, 1, 2);
			this->tableLayoutPanel1->Controls->Add(this->label4, 0, 2);
			this->tableLayoutPanel1->Controls->Add(this->textBox2, 1, 1);
			this->tableLayoutPanel1->Controls->Add(this->label3, 0, 1);
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(70, 88);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 5;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(682, 204);
			this->tableLayoutPanel1->TabIndex = 0;
			// 
			// textBox5
			// 
			this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox5->Location = System::Drawing::Point(258, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(421, 36);
			this->textBox5->TabIndex = 9;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Gold;
			this->label6->Dock = System::Windows::Forms::DockStyle::Right;
			this->label6->Location = System::Drawing::Point(140, 165);
			this->label6->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(115, 34);
			this->label6->TabIndex = 8;
			this->label6->Text = L"Balance:";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox4
			// 
			this->textBox4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox4->Location = System::Drawing::Point(258, 123);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(421, 36);
			this->textBox4->TabIndex = 7;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Gold;
			this->label5->Dock = System::Windows::Forms::DockStyle::Right;
			this->label5->Location = System::Drawing::Point(158, 125);
			this->label5->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(97, 30);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Phone:";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox3
			// 
			this->textBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox3->Location = System::Drawing::Point(258, 83);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(421, 36);
			this->textBox3->TabIndex = 5;
			this->textBox3->UseSystemPasswordChar = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Gold;
			this->label4->Dock = System::Windows::Forms::DockStyle::Right;
			this->label4->Location = System::Drawing::Point(118, 85);
			this->label4->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(137, 30);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Password:";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(258, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(421, 36);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Gold;
			this->label3->Dock = System::Windows::Forms::DockStyle::Right;
			this->label3->Location = System::Drawing::Point(163, 45);
			this->label3->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(92, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Name:";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->Dock = System::Windows::Forms::DockStyle::Right;
			this->label2->Location = System::Drawing::Point(203, 5);
			this->label2->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(52, 30);
			this->label2->TabIndex = 0;
			this->label2->Text = L"ID:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Enabled = false;
			this->textBox1->ForeColor = System::Drawing::Color::Silver;
			this->textBox1->Location = System::Drawing::Point(258, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(421, 36);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &AdminForm::textBox1_TextChanged);
			// 
			// pn_add
			// 
			this->pn_add->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_add->Controls->Add(this->groupBox1);
			this->pn_add->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_add->Location = System::Drawing::Point(0, 155);
			this->pn_add->Name = L"pn_add";
			this->pn_add->Size = System::Drawing::Size(1009, 462);
			this->pn_add->TabIndex = 3;
			// 
			// AdminForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1009, 617);
			this->Controls->Add(this->pn_show);
			this->Controls->Add(this->pn_add);
			this->Controls->Add(this->pn_trans);
			this->Controls->Add(this->pn_find);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8, 6, 8, 6);
			this->Name = L"AdminForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"AdminForm";
			this->Load += gcnew System::EventHandler(this, &AdminForm::AdminForm_Load);
			this->Click += gcnew System::EventHandler(this, &AdminForm::button8_Click_1);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->pn_show->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->pn_find->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
			this->pn_trans->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->pn_add->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_show->BringToFront();
	
	// clear existing rows
	this->dataGridView1->Rows->Clear();

	// fill rows from native Bank users
	for (const auto& u : Bank::Instance().users)
	{
		System::String^ id = marshal_as<System::String^>(u.id);
		System::String^ name = marshal_as<System::String^>(u.name);
		System::String^ phone = marshal_as<System::String^>(u.phone);
		double balance = u.balance;
		this->dataGridView1->Rows->Add(id, name, phone, balance);
	}

}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_add->BringToFront();
	this->textBox1->Text = marshal_as<System::String^>(Bank::Instance().nextID());
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_find->BringToFront();
	this->button13->Visible = false;
	this->textBox10->Clear();
	this->textBox9->Clear();
	this->textBox8->Clear();
	this->textBox7->Clear();
	this->comboBox1->Items->Clear();
	for (auto& u : Bank::Instance().users)
		this->comboBox1->Items->Add(marshal_as<String^>(u.id));
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
{
	this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
	this->pn_trans->BringToFront();
	this->dataGridView2->Rows->Clear();
	this->comboBox2->Items->Clear();
	for (auto& u : Bank::Instance().users)
		this->comboBox2->Items->Add(marshal_as<String^>(u.id));
}

private: System::Void SetActiveButton(System::Windows::Forms::Button^ active);
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void AdminForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		auto& bank = Bank::Instance();
		std::string ID = marshal_as<std::string>(this->textBox1->Text);
		std::string name = marshal_as<std::string>(this->textBox2->Text);
		std::string password = marshal_as<std::string>(this->textBox3->Text);
		std::string phone = marshal_as<std::string>(this->textBox4->Text);
		double balance = stod(marshal_as<std::string>(this->textBox5->Text));

		if (ID.empty() || name.empty() || password.empty() || phone.empty())
		{
			MessageBox::Show("All fields are required.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		if (balance < 0)
		{
			MessageBox::Show("Balance cannot be negative.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		bank.users.push_back(User{
			ID,
			name,
			password,
			phone,
			balance
			});
		this->textBox1->Text = marshal_as<String^>(Bank::Instance().nextID());
		this->textBox2->Clear();
		this->textBox3->Clear();
		this->textBox4->Clear();
		this->textBox5->Clear();
		MessageBox::Show("User added successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);

	}
	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e)
	{
		auto& bank = Bank::Instance();
		String^ selectedID = this->comboBox1->SelectedItem ? this->comboBox1->SelectedItem->ToString() : "";
		if (selectedID->Length == 0)
		{
			MessageBox::Show("Please select a user ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		std::string id = marshal_as<std::string>(selectedID);
		auto user = bank.FindUser(id);
		if (!user)
		{
			MessageBox::Show("User not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		this->textBox10->Text = marshal_as<String^>(user->id);
		this->textBox9->Text = marshal_as<String^>(user->name);
		this->textBox8->Text = marshal_as<String^>(user->phone);
		this->textBox7->Text = marshal_as<String^>(std::to_string(user->balance));

		this->button13->Visible = true;
	}
	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
	{
		auto& bank = Bank::Instance();
		std::string id = marshal_as<std::string>(this->comboBox1->SelectedItem->ToString());
		auto user = bank.FindUser(id);
		if (!user)
		{
			MessageBox::Show("User not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		System::Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to delete this user permanently?", "Confirm Deletion", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		
		if (result == System::Windows::Forms::DialogResult::Yes)
		{
			bank.RemoveUser(id);
			this->button3->PerformClick();
			MessageBox::Show("User removed successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
		}
	}
	private: System::Void button5_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		auto& bank = Bank::Instance();
		String^ selectedID = this->comboBox2->SelectedItem ? this->comboBox2->SelectedItem->ToString() : "";
		if (selectedID->Length == 0)
		{
			MessageBox::Show("Please select a user ID.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		std::string id = marshal_as<std::string>(selectedID);
		auto user = bank.FindUser(id);
		if (!user)
		{
			MessageBox::Show("User not found.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		
		this->dataGridView2->Rows->Clear();
		for (const auto& t : user->history)
		{
			System::String^ tid = marshal_as<System::String^>("T" + std::to_string(100 * (&t - &user->history[0] + 1)));
			System::String^ type = marshal_as<System::String^>(t.type);
			System::String^ amount = marshal_as<System::String^>(std::to_string(t.amount));
			System::String^ toUser = marshal_as<System::String^>(t.otherParty);
			this->dataGridView2->Rows->Add(tid, type, amount, toUser);
		}
	}
};
}
