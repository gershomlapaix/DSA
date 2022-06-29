#include <iostream>
#include <fstream>
#include <string>
#include "Account.h"

using namespace std;

// GLOBAL VARIABLES
ofstream accounts("accounts.dat", ios::ate | ios::out | ios::app);

// definitions
Account::Account(int accN, string accO, int dep)
{
    accountNumber = accN;
    accountOwner = accO;
    deposit = dep;
}

void Account::registerAccount(Account *account)
{
    accounts << account->accountNumber << "\t" << account->accountOwner << "\t" << account->deposit << "\n";

    accounts.close();
}

void Account::depositMoney(int amount, int accountCode)
{
    int code, mon;
    string names;

    ifstream inFile("accounts.dat");
    ofstream outFile("temp.dat");

    while (inFile >> code >> names >> mon)
    {
        if (code == accountCode)
        {
            mon += amount;
            outFile << code << "\t" << names << "\t" << mon << endl;
            cout << "\n\t-----------------------------------------------------------";
            cout << "\n\t| Account Code"
                 << "\t | Names\t\t | New Balance    | \n";
            cout << "\n\t-----------------------------------------------------------";
            cout << "\n\t|\t" << code << "\t\t" << names << "\t\t\t" << mon << endl;
            cout << "\n\t----------------------------------------------------------\n\n";
            // cout << "\n\t-----------------------------------\n\t Data updated successfully\n\t-----------------------------------\n\n";

            break;
        }
        outFile << code << "\t" << names << "\t" << mon << endl;
    }

    remove("accounts.dat");
    rename("temp.dat", "accounts.dat");

    inFile.close();
    outFile.close();
}

int main()
{

    Account *accPtr;

    int option,
        accountCode, amount = 500;
    string names;
    string line;

    ifstream inFile("accounts.dat");

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
            acc.setDeposit(amount);

            acc.registerAccount(accPtr);
            break;

        case 2:
            acc.depositMoney(1000, 1002);
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