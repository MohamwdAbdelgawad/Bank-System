#pragma once
#include <string>
#include <vector>
#include "Transaction.h"

class User {
public:
    User() = default;
    User(const std::string& id, const std::string& name, const std::string& pwd, const std::string& phone, double balance = 0.0)
        : id(id), name(name), password(pwd), phone(phone), balance(balance) {
    }

    void UpdateProfile(const std::string& name, const std::string& phone, const std::string& pwd)
    {
        this->name = name;
        this->phone = phone;
        this->password = pwd;
    }
    bool Deposit(double amount)
    {
        if (amount <= 0) return false;
        balance += amount;
		history.push_back(Transaction("Deposit", amount, "-"));
        return true;
    }

    bool Withdraw(double amount)
    {
        if (amount <= 0 || amount > balance) return false;
        balance -= amount;
		history.push_back(Transaction("Withdraw", amount, "-"));
        return true;
	}

    void AddTransaction(const Transaction& tx)
    {
		history.push_back(tx);
    }

    std::string id;
    std::string name;
    std::string password;
    std::string phone;
    double balance = 0.0;
    std::vector<Transaction> history;
};