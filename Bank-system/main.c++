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
    ofstream accounts("accounts.dat", ios::ate | ios::out | ios::app);
    accounts << account->accountNumber << "\t" << account->accountOwner << "\t" << account->deposit << "\n";

    accounts.close();
}

int main()
{

    Account *accPtr;

    int option,
        accountCode, amount;
    string names;
    string line;

    ifstream reading("accounts.dat");

    do
    {

        cout << "\n\t1. Register\n";

        cout << "\n\tEnter your option: ";
        cin >> option;

        Account acc;

        accPtr = &acc;

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

        case 2:
            while (reading >> accountCode >> names)
            {
                // reading >> accountCode >> names;
                // if (accountCode == 4740)
                    cout << accountCode << "\t" << names << "\t" << amount << endl;
                // else
                //     cout << "Not found\n";
            }
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