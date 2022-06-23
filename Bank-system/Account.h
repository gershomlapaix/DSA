#ifndef H_Account;
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
    Account(int accN, string accO, int deposit) {}

    // getters and setters

    void setAccountNumber(int accN)
    {
        accountNumber = accN;
    }
    int getAccountNumber()
    {
        return accountNumber;
    }

    void setAccountOwner(int accO)
    {
        accountOwner = accO;
    }

    string getAccountOwner()
    {
        return accountOwner;
    }
    // bank operations

    void deposit(int amount);
    void withDraw(int amount);
};

#endif;