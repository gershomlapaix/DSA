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
    ofstream accounts("accounts.csv", ios::ate | ios::out | ios::app);

    accounts << account->accountNumber << "," << account->accountOwner << "," << account->deposit << "\n";

    accounts.close();
}

void Account::depositMoney(int amount, int accountCode)
{
    int code, mon;
    string names;

    ifstream inFile("accounts.csv");
    ofstream outFile("temp.csv");

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
            cout << "\n\t-----------------------------------\n\t Data updated successfully\n\t-----------------------------------\n\n";

            // break;
        }
        else
        {
            outFile << code << "\t" << names << "\t" << mon << endl;
        }
    }
    remove("accounts.csv");
    rename("temp.csv", "accounts.csv");

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
            acc.depositMoney(2000, 100);
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