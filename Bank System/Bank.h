#pragma once
#include <vector>
#include <iostream>
#include <string>
#include "User.h"

class Bank
{
public:
    static Bank& Instance();
    static const std::string dataFilePath;
    void AddUser(const User& u);
    bool RemoveUser(const std::string& username);
    User* FindUser(const std::string& user_name);
    bool TransferBalance(const std::string& from_id, const std::string& to_id, double amount);
    User* AuthenticateUser(const std::string& id, const std::string& password);
    std::string nextID();
    void LoadFromFile();
    void SaveToFile();

    std::vector<User> users;
    User* current_user = nullptr;
private:
    Bank() = default;
};

