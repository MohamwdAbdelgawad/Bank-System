#include "LoginForm.h"
#include "Bank.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args)
{
	Bank::Instance().LoadFromFile();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Application::Run(gcnew BankSystem::LoginForm);
	Bank::Instance().SaveToFile();
}