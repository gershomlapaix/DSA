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

    // bank operations

    void deposit(int amount);
    void withDraw(int amount);
};

#endif;