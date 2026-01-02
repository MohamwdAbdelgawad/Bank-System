#include "UserForm.h"
#include "LoginForm.h"

using namespace System;
using namespace System::Windows::Forms;

namespace BankSystem {
    System::Void UserForm::button7_Click(System::Object^ sender, System::EventArgs^ e)
    {
        this->Hide();
        auto login = gcnew BankSystem::LoginForm();
        login->ShowDialog();
        this->Close();
    }
    System::Void UserForm::SetActiveButton(System::Windows::Forms::Button^ active)
    {
        // reset all buttons in panel2 to white
        for each (Control ^ c in this->panel2->Controls)
        {
            Button^ b = dynamic_cast<Button^>(c);
            if (b) b->BackColor = System::Drawing::Color::White;
        }

        // set the active one to green
        if (active) active->BackColor = System::Drawing::Color::Lime;
    }

}