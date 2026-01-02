#include "LoginForm.h"
#include "AdminForm.h"
#include "UserForm.h"
#include "Bank.h"
System::Void BankSystem::LoginForm::button1_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (textBox1->Text == "admin" && textBox2->Text == "123")
	{
		this->Hide();
		auto admin = gcnew BankSystem::AdminForm();
		admin->ShowDialog();
		this->Close();
		return;
	}

	auto& bank = Bank::Instance();
	if (bank.current_user = bank.AuthenticateUser(marshal_as<std::string>(textBox1->Text), marshal_as<std::string>(textBox2->Text)))
	{
		this->Hide();
		auto userForm = gcnew BankSystem::UserForm();
		userForm->ShowDialog();
		this->Close();
		return;
	}
	// Authentication failed
	MessageBox::Show("Invalid username or password.", "Login Failed", MessageBoxButtons::OK, MessageBoxIcon::Error);
}