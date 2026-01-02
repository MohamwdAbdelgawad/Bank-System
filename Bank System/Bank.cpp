#include "Bank.h"
using namespace std;

const std::string Bank::dataFilePath = "database.txt";

Bank& Bank::Instance()
{
    static Bank instance;
    return instance;
}

void Bank::AddUser(const User& u)
{
    users.push_back(u);
}

bool Bank::RemoveUser(const string& username)
{
    for (auto it = users.begin(); it != users.end(); ++it)
        if (it->id == username)
            return users.erase(it), true;
    return false;
}

User* Bank::FindUser(const string& user_name)
{
    for (auto& u : users)
        if (u.id == user_name)
            return &u;
    return nullptr;
}

bool Bank::TransferBalance(const string& from_id, const string& to_id, double amount)
{
    User* from_user = FindUser(from_id);
    User* to_user = FindUser(to_id);
    if (!from_user || !to_user) return false;
    if (amount <= 0 || amount > from_user->balance) return false;
	from_user->balance -= amount;
    to_user->balance += amount;
    from_user->AddTransaction(Transaction("Transfer", amount, to_id));
    return true;
}

User* Bank::AuthenticateUser(const string& id, const string& password)
{
    User* u = FindUser(id);
    if (u && u->password == password)
        return u;
    return nullptr;
}

string Bank::nextID()
{
    if (users.empty()) return "U" + to_string(100);
    string last_id = users.back().id;
    return "U" + to_string(stoi(last_id.substr(1)) + 100);
}

void Bank::LoadFromFile()
{
    if (freopen(dataFilePath.c_str(), "r", stdin) == nullptr) {
        cerr << "Failed to open file: " << dataFilePath << std::endl;
        return;
    }
    int size;
    cin >> size;
    while (size--)
    {
        string id;
        string name, pwd, phone;
        double balance;
        cin >> id;
		cin.ignore(); // to skip the newline after id
        getline(cin, name);
        cin >> pwd >> phone >> balance;
        User u(id, name, pwd, phone, balance);
        int tx_count; cin >> tx_count;
        while (tx_count--)
        {
            string ttype, other;
            double amount;
            cin >> ttype >> amount >> other;
            Transaction tx(ttype, amount, other);
            u.AddTransaction(tx);
        }
        AddUser(u);
    }

}

void Bank::SaveToFile()
{
    freopen(dataFilePath.c_str(), "w", stdout);
    cout << users.size() << endl;
    for (const auto& u : users)
    {
        cout << u.id << " " << u.name << "\n" << u.password << " "
            << u.phone << " " << u.balance << endl;
        cout << '\t' << u.history.size() << endl;
        for (const auto& tx : u.history)
            cout << '\t' << tx.type << " " << tx.amount << " " << tx.otherParty << endl;
    }
}

