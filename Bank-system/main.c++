#include <iostream>
#include <fstream>
#include <string>
#include "Account.h"

using namespace std;

// definitions
Account::Account(int accN, string accO, int dep)
{
    accountNumber = accN;
    accountOwner = accO;
    deposit = dep;
}

void Account::registerAccount(Account *account)
{
    ofstream accounts("accounts.dat", ios::out | ios::app | ios::ate |);
    accounts << account->accountNumber << "\t" << account->accountOwner;

    accounts.close();
}

int main()
{

    Account *accPtr;

    int option,
        accountCode, amount;
    string names;

    do
    {

        cout << "\n\t1. Register\n";

        cout << "\n\tEnter your option: ";
        cin >> option;

        Account acc;

        accPtr = &acc;
        // acc.registerAccount(accPtr);

        switch (option)
        {
        case 0:
            break;

        case 1:
            cout << "Enter the account code : ";
            cin >> accountCode;

            cout << "Entert your names : ";
            cin >> names;

            acc.setAccountNumber(accountCode);
            acc.setAccountOwner(names);
            acc.setDeposit(500);

            acc.registerAccount(accPtr);
            break;

        case 3:
            system("clear");
            break;

        default:
            cout << "\tEnter the proper option\n\n";
            break;
        }

    } while (option != 0);

    return 0;
}