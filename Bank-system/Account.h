#ifndef H_Account
#define H_Account
#include <iostream>
#include <string>

using namespace std;

class Account
{
private:
    int accountNumber;
    string accountOwner;
    int deposit;

public:
    Account() {}
    Account(int accN, string accO, int dep);

    // getters and setters

    void setAccountNumber(int accN)
    {
        accountNumber = accN;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }

    void setAccountOwner(string accO)
    {
        accountOwner = accO;
    }

    string getAccountOwner()
    {
        return accountOwner;
    }

    void setDeposit(int dep)
    {
        deposit = dep;
    }
    
    int getDeposit()
    {
        return deposit;
    }

    // bank operations
    void registerAccount(Account *account);
    void depositMoney(int amount);
    void withDraw(int amount);
};

#endif