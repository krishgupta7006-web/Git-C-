#include<iostream>
using namespace std;

class BankAccount
{
public:
    int accountNumber;
    string customerName;

    static int totalAccounts;

    void input()
    {
        cout << "Enter account number: ";
        cin >> accountNumber;

        cout << "Enter customer name: ";
        cin >> customerName;

        totalAccounts++;
    }

    static void displayTotal()
    {
        cout << "\nTotal Accounts = " << totalAccounts;
    }
};

int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount a1, a2, a3;

    cout << "Account 1\n";
    a1.input();

    cout << "\nAccount 2\n";
    a2.input();

    cout << "\nAccount 3\n";
    a3.input();

    BankAccount::displayTotal();

    return 0;
}