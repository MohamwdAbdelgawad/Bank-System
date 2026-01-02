#pragma once
#include <string>
#include <ctime>

struct Transaction
{
    std::string type;
    double amount = 0.0;
    std::string otherParty = "_"; // target account for transfers

    Transaction() = default;
    Transaction(const std::string& t, double a, const std::string& o)
        : type(t), amount(a), otherParty(o) {}
};