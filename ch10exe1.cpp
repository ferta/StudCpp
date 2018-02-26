
#include <string>
#include <iostream>

class BankAccount {
private:
    std::string name;
    std::string accountNumber;
    double balance;
public:
    BankAccount(std::string nam, std::string num) { name = nam; accountNumber = num; balance = 0; };
    ~BankAccount();
    void PrintAccountInfo();
    bool PutToAccount(double);
    bool RaiseFromAccount(double);
};

BankAccount::~BankAccount() {
    std::cout << "Remove " << name << std::endl;
}

void BankAccount::PrintAccountInfo() {
    std::cout << "\tName: " << name  << "\n";
    std::cout << "\tAccount: " << accountNumber  << "\n";
    std::cout << "\tBalance: " << balance  << "\n";
};

bool BankAccount::PutToAccount(double s) {
    balance = balance + s;
    return 0;
};

bool BankAccount::RaiseFromAccount(double s) {
    if (s > balance)
    {
        std::cout <<  "!!!! NO many money: " << std::endl;
        return false;
    }
    balance = balance - s;
};



int main(int argc, char * argv[])
{
    BankAccount *User1 = new BankAccount("Aleksey", "00034");
    User1->PrintAccountInfo();
    User1->PutToAccount(43);
    User1->PrintAccountInfo();
    delete(User1);
    BankAccount M("Marina", "787878");
    M.PutToAccount(32.32);
    M.PrintAccountInfo();
    M.RaiseFromAccount(40);
    M.PrintAccountInfo();
}

