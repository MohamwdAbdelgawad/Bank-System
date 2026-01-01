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

	public ref class UserForm : public System::Windows::Forms::Form
	{
	public:
		UserForm(void)
		{
			InitializeComponent();
			// Ensure initial withdraw UI state reflects current balance / empty input
			this->label13->Text = "Hi, " + marshal_as<System::String^>(Bank::Instance().current_user->name);
			this->textBox14_TextChanged(nullptr, nullptr);
			this->textBox1_TextChanged(nullptr, nullptr);
			this->textBox6_TextChanged(nullptr, nullptr);
			
			Bank& bank = Bank::Instance();
			// combo box
			for (auto& u : bank.users)
				if (&u != bank.current_user)
					this->comboBox1->Items->Add(marshal_as<System::String^>(u.id));
		}

	protected:
		~UserForm()
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
	private: System::Windows::Forms::Panel^ pn_withdraw;
	private: System::Windows::Forms::Panel^ pn_show;





	private: System::Windows::Forms::GroupBox^ groupBox4;





































	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ dataGridViewTextBoxColumn4;
	private: System::Windows::Forms::Label^ label13;
private: System::Windows::Forms::GroupBox^ groupBox2;

private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel4;
private: System::Windows::Forms::Label^ label7;
private: System::Windows::Forms::Button^ button6;

private: System::Windows::Forms::TextBox^ textBox14;

private: System::Windows::Forms::Label^ labelNewBalance;
	private: System::Windows::Forms::Panel^ pn_deposit;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel5;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Panel^ pn_transfer;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel3;
private: System::Windows::Forms::Label^ label12;

private: System::Windows::Forms::ComboBox^ comboBox1;
private: System::Windows::Forms::Label^ label4;
private: System::Windows::Forms::Panel^ pn_info;
private: System::Windows::Forms::GroupBox^ groupBox5;
private: System::Windows::Forms::TableLayoutPanel^ tableLayoutPanel2;

private: System::Windows::Forms::Label^ label6;
private: System::Windows::Forms::TextBox^ textBox4;
private: System::Windows::Forms::Label^ label5;
private: System::Windows::Forms::TextBox^ textBox3;
private: System::Windows::Forms::Label^ label8;
private: System::Windows::Forms::TextBox^ textBox2;
private: System::Windows::Forms::Label^ label9;
private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::TextBox^ textBox7;
private: System::Windows::Forms::Button^ button9;
private: System::Windows::Forms::TextBox^ textBox5;
private: System::Windows::Forms::Button^ button10;






	private:
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(UserForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle11 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle12 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pn_withdraw = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel4 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->labelNewBalance = (gcnew System::Windows::Forms::Label());
			this->pn_show = (gcnew System::Windows::Forms::Panel());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->dataGridViewTextBoxColumn1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->dataGridViewTextBoxColumn4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pn_deposit = (gcnew System::Windows::Forms::Panel());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->tableLayoutPanel5 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->pn_transfer = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tableLayoutPanel3 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->tableLayoutPanel1 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pn_info = (gcnew System::Windows::Forms::Panel());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tableLayoutPanel2 = (gcnew System::Windows::Forms::TableLayoutPanel());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->pn_withdraw->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->tableLayoutPanel4->SuspendLayout();
			this->pn_show->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->pn_deposit->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->tableLayoutPanel5->SuspendLayout();
			this->pn_transfer->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->tableLayoutPanel3->SuspendLayout();
			this->tableLayoutPanel1->SuspendLayout();
			this->pn_info->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->tableLayoutPanel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::DarkSlateGray;
			this->panel1->Controls->Add(this->button10);
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
			// button10
			// 
			this->button10->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(29, 0);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(45, 48);
			this->button10->TabIndex = 3;
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &UserForm::button10_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Italic)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::Lime;
			this->label13->Location = System::Drawing::Point(3, 51);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(53, 29);
			this->label13->TabIndex = 2;
			this->label13->Text = L"Hi, ";
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
			this->button7->Click += gcnew System::EventHandler(this, &UserForm::button7_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
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
			this->button4->Click += gcnew System::EventHandler(this, &UserForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->BackColor = System::Drawing::Color::White;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(488, 0);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(277, 72);
			this->button3->TabIndex = 1;
			this->button3->Text = L"Transfer";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &UserForm::button3_Click);
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
			this->button2->Text = L"Deposit";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &UserForm::button2_Click);
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
			this->button1->Text = L"Withdraw";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &UserForm::button1_Click);
			// 
			// pn_withdraw
			// 
			this->pn_withdraw->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_withdraw->Controls->Add(this->groupBox2);
			this->pn_withdraw->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_withdraw->Location = System::Drawing::Point(0, 155);
			this->pn_withdraw->Name = L"pn_withdraw";
			this->pn_withdraw->Size = System::Drawing::Size(1009, 462);
			this->pn_withdraw->TabIndex = 2;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableLayoutPanel4);
			this->groupBox2->Controls->Add(this->labelNewBalance);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(1009, 462);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Withdraw ";
			// 
			// tableLayoutPanel4
			// 
			this->tableLayoutPanel4->ColumnCount = 3;
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.61456F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.38544F)));
			this->tableLayoutPanel4->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				215)));
			this->tableLayoutPanel4->Controls->Add(this->label7, 0, 0);
			this->tableLayoutPanel4->Controls->Add(this->button6, 2, 0);
			this->tableLayoutPanel4->Controls->Add(this->textBox14, 1, 0);
			this->tableLayoutPanel4->Location = System::Drawing::Point(219, 79);
			this->tableLayoutPanel4->Name = L"tableLayoutPanel4";
			this->tableLayoutPanel4->RowCount = 1;
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel4->Size = System::Drawing::Size(546, 44);
			this->tableLayoutPanel4->TabIndex = 4;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Gold;
			this->label7->Dock = System::Windows::Forms::DockStyle::Left;
			this->label7->Location = System::Drawing::Point(0, 5);
			this->label7->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(107, 34);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Amount:";
			this->label7->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button6
			// 
			this->button6->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button6->BackColor = System::Drawing::Color::Green;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(381, 4);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(162, 36);
			this->button6->TabIndex = 2;
			this->button6->Text = L"Withdraw";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &UserForm::button6_Click);
			// 
			// textBox14
			// 
			this->textBox14->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox14->Location = System::Drawing::Point(110, 3);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(217, 36);
			this->textBox14->TabIndex = 4;
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &UserForm::textBox14_TextChanged);
			this->textBox14->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserForm::NumericTextBox_KeyPress);
			// 
			// labelNewBalance
			// 
			this->labelNewBalance->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, System::Drawing::FontStyle::Bold));
			this->labelNewBalance->ForeColor = System::Drawing::Color::Black;
			this->labelNewBalance->Location = System::Drawing::Point(219, 130);
			this->labelNewBalance->Name = L"labelNewBalance";
			this->labelNewBalance->Size = System::Drawing::Size(400, 30);
			this->labelNewBalance->TabIndex = 200;
			this->labelNewBalance->Text = L"New balance: 0.00";
			// 
			// pn_show
			// 
			this->pn_show->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_show->Controls->Add(this->groupBox4);
			this->pn_show->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_show->Location = System::Drawing::Point(0, 155);
			this->pn_show->Name = L"pn_show";
			this->pn_show->Size = System::Drawing::Size(1009, 462);
			this->pn_show->TabIndex = 5;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->dataGridView2);
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
			// dataGridView2
			// 
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle10->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->dataGridViewTextBoxColumn1,
					this->dataGridViewTextBoxColumn2, this->dataGridViewTextBoxColumn3, this->dataGridViewTextBoxColumn4
			});
			dataGridViewCellStyle11->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle11->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle11->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle11->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle11->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle11->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle11->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle11;
			this->dataGridView2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView2->EnableHeadersVisualStyles = false;
			this->dataGridView2->Location = System::Drawing::Point(3, 32);
			this->dataGridView2->Name = L"dataGridView2";
			dataGridViewCellStyle12->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle12->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle12->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle12->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle12->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle12->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle12->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle12;
			this->dataGridView2->RowTemplate->Height = 30;
			this->dataGridView2->Size = System::Drawing::Size(1003, 427);
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
			// pn_deposit
			// 
			this->pn_deposit->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_deposit->Controls->Add(this->groupBox3);
			this->pn_deposit->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_deposit->Location = System::Drawing::Point(0, 155);
			this->pn_deposit->Name = L"pn_deposit";
			this->pn_deposit->Size = System::Drawing::Size(1009, 462);
			this->pn_deposit->TabIndex = 6;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->tableLayoutPanel5);
			this->groupBox3->Controls->Add(this->label15);
			this->groupBox3->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox3->Location = System::Drawing::Point(0, 0);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(1009, 462);
			this->groupBox3->TabIndex = 4;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Deposit  ";
			// 
			// tableLayoutPanel5
			// 
			this->tableLayoutPanel5->ColumnCount = 3;
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.61456F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.38544F)));
			this->tableLayoutPanel5->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				215)));
			this->tableLayoutPanel5->Controls->Add(this->label14, 0, 0);
			this->tableLayoutPanel5->Controls->Add(this->button5, 2, 0);
			this->tableLayoutPanel5->Controls->Add(this->textBox6, 1, 0);
			this->tableLayoutPanel5->Location = System::Drawing::Point(219, 79);
			this->tableLayoutPanel5->Name = L"tableLayoutPanel5";
			this->tableLayoutPanel5->RowCount = 1;
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel5->Size = System::Drawing::Size(546, 44);
			this->tableLayoutPanel5->TabIndex = 4;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Gold;
			this->label14->Dock = System::Windows::Forms::DockStyle::Left;
			this->label14->Location = System::Drawing::Point(0, 5);
			this->label14->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(107, 34);
			this->label14->TabIndex = 3;
			this->label14->Text = L"Amount:";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button5->BackColor = System::Drawing::Color::Green;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(381, 4);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(162, 36);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Deposit";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &UserForm::button5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox6->Location = System::Drawing::Point(110, 3);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(217, 36);
			this->textBox6->TabIndex = 4;
			this->textBox6->TextChanged += gcnew System::EventHandler(this, &UserForm::textBox6_TextChanged);
			this->textBox6->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserForm::NumericTextBox_KeyPress);
			// 
			// label15
			// 
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, System::Drawing::FontStyle::Bold));
			this->label15->ForeColor = System::Drawing::Color::Black;
			this->label15->Location = System::Drawing::Point(219, 130);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(400, 30);
			this->label15->TabIndex = 200;
			this->label15->Text = L"New balance: 0.00";
			// 
			// pn_transfer
			// 
			this->pn_transfer->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_transfer->Controls->Add(this->groupBox1);
			this->pn_transfer->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_transfer->Location = System::Drawing::Point(0, 155);
			this->pn_transfer->Name = L"pn_transfer";
			this->pn_transfer->Size = System::Drawing::Size(1009, 462);
			this->pn_transfer->TabIndex = 7;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->tableLayoutPanel3);
			this->groupBox1->Controls->Add(this->tableLayoutPanel1);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1009, 462);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Transfer ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Lime;
			this->label4->Location = System::Drawing::Point(630, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(59, 29);
			this->label4->TabIndex = 202;
			this->label4->Text = L"To: ";
			// 
			// tableLayoutPanel3
			// 
			this->tableLayoutPanel3->ColumnCount = 2;
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				21.46691F)));
			this->tableLayoutPanel3->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				78.5331F)));
			this->tableLayoutPanel3->Controls->Add(this->label12, 0, 0);
			this->tableLayoutPanel3->Controls->Add(this->comboBox1, 1, 0);
			this->tableLayoutPanel3->Location = System::Drawing::Point(223, 35);
			this->tableLayoutPanel3->Name = L"tableLayoutPanel3";
			this->tableLayoutPanel3->RowCount = 1;
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel3->Size = System::Drawing::Size(559, 45);
			this->tableLayoutPanel3->TabIndex = 201;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Gold;
			this->label12->Dock = System::Windows::Forms::DockStyle::Left;
			this->label12->Location = System::Drawing::Point(0, 5);
			this->label12->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(89, 35);
			this->label12->TabIndex = 3;
			this->label12->Text = L"To ID:";
			this->label12->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// comboBox1
			// 
			this->comboBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(123, 3);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(433, 37);
			this->comboBox1->TabIndex = 4;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &UserForm::comboBox1_SelectedIndexChanged);
			// 
			// tableLayoutPanel1
			// 
			this->tableLayoutPanel1->ColumnCount = 3;
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				32.61456F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				67.38544F)));
			this->tableLayoutPanel1->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Absolute,
				195)));
			this->tableLayoutPanel1->Controls->Add(this->label2, 0, 0);
			this->tableLayoutPanel1->Controls->Add(this->button8, 2, 0);
			this->tableLayoutPanel1->Controls->Add(this->textBox1, 1, 0);
			this->tableLayoutPanel1->Location = System::Drawing::Point(223, 99);
			this->tableLayoutPanel1->Name = L"tableLayoutPanel1";
			this->tableLayoutPanel1->RowCount = 1;
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 50)));
			this->tableLayoutPanel1->Size = System::Drawing::Size(559, 44);
			this->tableLayoutPanel1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Gold;
			this->label2->Dock = System::Windows::Forms::DockStyle::Left;
			this->label2->Location = System::Drawing::Point(0, 5);
			this->label2->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 34);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Amount:";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->button8->BackColor = System::Drawing::Color::Green;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(394, 4);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(162, 36);
			this->button8->TabIndex = 2;
			this->button8->Text = L"Transfer";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &UserForm::button8_Click);
			// 
			// textBox1
			// 
			this->textBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox1->Location = System::Drawing::Point(121, 3);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(239, 36);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &UserForm::textBox1_TextChanged);
			this->textBox1->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &UserForm::NumericTextBox_KeyPress);
			// 
			// label3
			// 
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 14, System::Drawing::FontStyle::Bold));
			this->label3->ForeColor = System::Drawing::Color::Black;
			this->label3->Location = System::Drawing::Point(224, 160);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(400, 30);
			this->label3->TabIndex = 200;
			this->label3->Text = L"New balance: 0.00";
			// 
			// pn_info
			// 
			this->pn_info->BackColor = System::Drawing::Color::SteelBlue;
			this->pn_info->Controls->Add(this->groupBox5);
			this->pn_info->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pn_info->Location = System::Drawing::Point(0, 155);
			this->pn_info->Name = L"pn_info";
			this->pn_info->Size = System::Drawing::Size(1009, 462);
			this->pn_info->TabIndex = 5;
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->tableLayoutPanel2);
			this->groupBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox5->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox5->Location = System::Drawing::Point(0, 0);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(1009, 462);
			this->groupBox5->TabIndex = 4;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L" Profile Info  ";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Green;
			this->button9->Location = System::Drawing::Point(773, 343);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(126, 47);
			this->button9->TabIndex = 2;
			this->button9->Text = L"Save";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &UserForm::button9_Click_1);
			// 
			// tableLayoutPanel2
			// 
			this->tableLayoutPanel2->ColumnCount = 2;
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				37.5F)));
			this->tableLayoutPanel2->ColumnStyles->Add((gcnew System::Windows::Forms::ColumnStyle(System::Windows::Forms::SizeType::Percent,
				62.5F)));
			this->tableLayoutPanel2->Controls->Add(this->textBox5, 1, 4);
			this->tableLayoutPanel2->Controls->Add(this->label6, 0, 4);
			this->tableLayoutPanel2->Controls->Add(this->textBox4, 1, 3);
			this->tableLayoutPanel2->Controls->Add(this->label5, 0, 3);
			this->tableLayoutPanel2->Controls->Add(this->textBox3, 1, 2);
			this->tableLayoutPanel2->Controls->Add(this->label8, 0, 2);
			this->tableLayoutPanel2->Controls->Add(this->textBox2, 1, 1);
			this->tableLayoutPanel2->Controls->Add(this->label9, 0, 1);
			this->tableLayoutPanel2->Controls->Add(this->label10, 0, 0);
			this->tableLayoutPanel2->Controls->Add(this->textBox7, 1, 0);
			this->tableLayoutPanel2->Location = System::Drawing::Point(57, 125);
			this->tableLayoutPanel2->Name = L"tableLayoutPanel2";
			this->tableLayoutPanel2->RowCount = 5;
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->RowStyles->Add((gcnew System::Windows::Forms::RowStyle(System::Windows::Forms::SizeType::Percent, 20)));
			this->tableLayoutPanel2->Size = System::Drawing::Size(682, 204);
			this->tableLayoutPanel2->TabIndex = 1;
			// 
			// textBox5
			// 
			this->textBox5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox5->Enabled = false;
			this->textBox5->ForeColor = System::Drawing::Color::Silver;
			this->textBox5->Location = System::Drawing::Point(258, 163);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
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
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Gold;
			this->label8->Dock = System::Windows::Forms::DockStyle::Right;
			this->label8->Location = System::Drawing::Point(118, 85);
			this->label8->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(137, 30);
			this->label8->TabIndex = 4;
			this->label8->Text = L"Password:";
			this->label8->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox2
			// 
			this->textBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox2->Location = System::Drawing::Point(258, 43);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(421, 36);
			this->textBox2->TabIndex = 3;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Gold;
			this->label9->Dock = System::Windows::Forms::DockStyle::Right;
			this->label9->Location = System::Drawing::Point(163, 45);
			this->label9->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(92, 30);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Name:";
			this->label9->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Gold;
			this->label10->Dock = System::Windows::Forms::DockStyle::Right;
			this->label10->Location = System::Drawing::Point(203, 5);
			this->label10->Margin = System::Windows::Forms::Padding(0, 5, 0, 5);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(52, 30);
			this->label10->TabIndex = 0;
			this->label10->Text = L"ID:";
			this->label10->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// textBox7
			// 
			this->textBox7->Dock = System::Windows::Forms::DockStyle::Fill;
			this->textBox7->Enabled = false;
			this->textBox7->ForeColor = System::Drawing::Color::Silver;
			this->textBox7->Location = System::Drawing::Point(258, 3);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(421, 36);
			this->textBox7->TabIndex = 1;
			// 
			// UserForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(15, 29);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)));
			this->ClientSize = System::Drawing::Size(1009, 617);
			this->Controls->Add(this->pn_withdraw);
			this->Controls->Add(this->pn_info);
			this->Controls->Add(this->pn_transfer);
			this->Controls->Add(this->pn_deposit);
			this->Controls->Add(this->pn_show);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Font = (gcnew System::Drawing::Font(L"Tahoma", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(8, 6, 8, 6);
			this->Name = L"UserForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"UserForm";
			this->Click += gcnew System::EventHandler(this, &UserForm::button8_Click_1);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->pn_withdraw->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->tableLayoutPanel4->ResumeLayout(false);
			this->tableLayoutPanel4->PerformLayout();
			this->pn_show->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->pn_deposit->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->tableLayoutPanel5->ResumeLayout(false);
			this->tableLayoutPanel5->PerformLayout();
			this->pn_transfer->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->tableLayoutPanel3->ResumeLayout(false);
			this->tableLayoutPanel3->PerformLayout();
			this->tableLayoutPanel1->ResumeLayout(false);
			this->tableLayoutPanel1->PerformLayout();
			this->pn_info->ResumeLayout(false);
			this->groupBox5->ResumeLayout(false);
			this->tableLayoutPanel2->ResumeLayout(false);
			this->tableLayoutPanel2->PerformLayout();
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
		this->pn_withdraw->BringToFront();
		this->textBox14->Clear();
		textBox14_TextChanged(nullptr, nullptr);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
		this->pn_deposit->BringToFront();
		this->textBox6->Clear();
		this->textBox6_TextChanged(nullptr, nullptr);
	}

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
		this->pn_transfer->BringToFront();
		this->comboBox1->SelectedIndex = -1;
		this->textBox1->Clear();
		this->textBox1_TextChanged(nullptr, nullptr);
		this->label4->Text = "To: ";
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->SetActiveButton(dynamic_cast<System::Windows::Forms::Button^>(sender));
		this->pn_show->BringToFront();
		this->dataGridView2->Rows->Clear();
		
		auto& bank = Bank::Instance();
		for (const auto& t : bank.current_user->history)
		{
			System::String^ tid = marshal_as<System::String^>("T" + std::to_string(100 * (&t - &bank.current_user->history[0] + 1)));
			System::String^ type = marshal_as<System::String^>(t.type);
			System::String^ amount = marshal_as<System::String^>(std::to_string(t.amount));
			System::String^ toUser = marshal_as<System::String^>(t.otherParty);
			this->dataGridView2->Rows->Add(tid, type, amount, toUser);
		}
	}

	private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e)
	{
		this->pn_info->BringToFront();
		Bank& bank = Bank::Instance();
		this->textBox7->Text = marshal_as<System::String^>(bank.current_user->id);
		this->textBox2->Text = marshal_as<System::String^>(bank.current_user->name);
		this->textBox3->Text = marshal_as<System::String^>(bank.current_user->password);
		this->textBox4->Text = marshal_as<System::String^>(bank.current_user->phone);
		this->textBox5->Text = marshal_as<System::String^>(std::to_string(bank.current_user->balance));
	}
	private: System::Void SetActiveButton(System::Windows::Forms::Button^ active);

	private: System::Void button8_Click_1(System::Object^ sender, System::EventArgs^ e)
	{

	}

	private: System::Void button13_Click(System::Object^ sender, System::EventArgs^ e)
	{
		
	}

	private: System::Void button9_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void NumericTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
	{
		TextBox^ tb = dynamic_cast<TextBox^>(sender);
		if (e->KeyChar == '\b' || !tb) return;
		// allow digits, one decimal point, and backspace
		int decimal_index = tb->Text->IndexOf('.');
		if (~decimal_index && decimal_index == tb->Text->Length - 2 || tb->Text->Length > 14)
		{
			e->Handled = true; // disallow more than 2 decimal places and max length
			return;
		}

		if (e->KeyChar == '.')
		{
			if (~decimal_index) // if '.' already exists
			{
				e->Handled = true; // disallow second '.'
				return;
			}
			return; // allow first '.'
		}
		if (!System::Char::IsDigit(e->KeyChar))
			e->Handled = true; // block everything else
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string amountStr = marshal_as<std::string>(this->textBox14->Text);
		double amount = std::stod(amountStr);
		auto& bank = Bank::Instance();
		
		auto result = MessageBox::Show("Are you sure you want to withdraw " + this->textBox14->Text + "?", "Confirm Withdrawal", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::No) return;
		
		bank.current_user->Withdraw(amount);
		this->button1->PerformClick();
		MessageBox::Show("Withdrawal successful.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
	private: System::Void textBox14_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		double current = Bank::Instance().current_user->balance;
		String^ s = this->textBox14->Text->Trim();

		if (s->Length == 0)
		{
			this->labelNewBalance->Text = System::String::Format("New balance: {0:F2}", current);
			this->labelNewBalance->ForeColor = System::Drawing::Color::Lime;
			this->button6->Enabled = false;
			return;
		}

		double amount = 0.0;
		if (!System::Double::TryParse(s, amount) || amount <= 0.0)
		{
			this->labelNewBalance->Text = "Invalid amount";
			this->labelNewBalance->ForeColor = System::Drawing::Color::Red;
			this->button6->Enabled = false;
			return;
		}

		double newBal = current - amount;
		this->labelNewBalance->Text = System::String::Format("New balance: {0:F2}", newBal);
		if (newBal < 0.0)
		{
			this->labelNewBalance->ForeColor = System::Drawing::Color::Red;
			this->button6->Enabled = false;
		}
		else
		{
			this->labelNewBalance->ForeColor = System::Drawing::Color::Lime;
			this->button6->Enabled = true;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e)
	{
		double amount = std::stod(marshal_as<std::string>(this->textBox6->Text));
		auto& bank = Bank::Instance();

		auto result = MessageBox::Show("Are you sure you want to deposit " + this->textBox6->Text + "?", "Confirm Deposit", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::No) return;

		bank.current_user->Deposit(amount);
		this->button2->PerformClick();
		MessageBox::Show("Deposit successful.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void textBox6_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		double current = Bank::Instance().current_user->balance;
		String^ s = this->textBox6->Text->Trim();
		if (s->Length == 0)
		{
			this->label15->Text = System::String::Format("New balance: {0:F2}", current);
			this->label15->ForeColor = System::Drawing::Color::Lime;
			this->button5->Enabled = false;
			return;
		}
		double amount = 0.0;
		if (!System::Double::TryParse(s, amount) || amount <= 0.0)
		{
			this->label15->Text = "Invalid amount";
			this->label15->ForeColor = System::Drawing::Color::Red;
			this->button5->Enabled = false;
			return;
		}
		double newBal = current + amount;
		this->label15->Text = System::String::Format("New balance: {0:F2}", newBal);
		this->label15->ForeColor = System::Drawing::Color::Lime;
		this->button5->Enabled = true;
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		double current = Bank::Instance().current_user->balance;
		String^ s = this->textBox1->Text->Trim();
		if (s->Length == 0)
		{
			this->label3->Text = System::String::Format("New balance: {0:F2}", current);
			this->label3->ForeColor = System::Drawing::Color::Lime;
			this->button8->Enabled = false;
			return;
		}
		double amount = 0.0;
		if (!System::Double::TryParse(s, amount) || amount <= 0.0)
		{
			this->label3->Text = "Invalid amount";
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->button8->Enabled = false;
			return;
		}
		double newBal = current - amount;
		this->label3->Text = System::String::Format("New balance: {0:F2}", newBal);
		if (newBal < 0.0)
			this->label3->ForeColor = System::Drawing::Color::Red,
			this->button8->Enabled = false;
		else
			this->label3->ForeColor = System::Drawing::Color::Lime,
			this->button8->Enabled = true;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
	{
		auto& bank = Bank::Instance();
		if (!~this->comboBox1->SelectedIndex) return;
		String^ selectedID = this->comboBox1->SelectedItem->ToString();
		User* toUser = bank.FindUser(marshal_as<std::string>(selectedID));
		this->label4->Text = toUser ? "To: " + marshal_as<String^>(toUser->name) : "To: ";
	}
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e)
	{
		if (!~this->comboBox1->SelectedIndex || !this->textBox1->Text->Length)
		{
			MessageBox::Show("All feilds are required!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}

		double amount = std::stod(marshal_as<std::string>(this->textBox1->Text));
		auto& bank = Bank::Instance();
		String^ selectedID = this->comboBox1->SelectedItem->ToString();
		User* toUser = bank.FindUser(marshal_as<std::string>(selectedID));
		
		auto result = MessageBox::Show("Are you sure you want to transfer " + this->textBox1->Text + " to " + marshal_as<String^>(toUser->name) + " ?", "Confirm Transfer", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == System::Windows::Forms::DialogResult::No) return;

		bank.TransferBalance(bank.current_user->id, toUser->id, amount);
		this->button3->PerformClick();
		MessageBox::Show("Transfer successful.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}

	private: System::Void button9_Click_1(System::Object^ sender, System::EventArgs^ e)
	{
		auto& bank = Bank::Instance();
		if (this->textBox2->Text->Length == 0 || this->textBox3->Text->Length == 0 || this->textBox4->Text->Length == 0)
		{
			MessageBox::Show("All fields are required!", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
			return;
		}
		bank.current_user->name = marshal_as<std::string>(this->textBox2->Text);
		bank.current_user->password = marshal_as<std::string>(this->textBox3->Text);
		bank.current_user->phone = marshal_as<std::string>(this->textBox4->Text);
		this->label13->Text = "Hi, " + this->textBox2->Text;
		this->button10->PerformClick();
		MessageBox::Show("Profile updated successfully.", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
	}
};
}
