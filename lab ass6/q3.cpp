#include <iostream>
using namespace std;

class Account
{
private:
    const long accountNumber;
    long transactionID;
    string transactionType;
    double balance;
  static long nextTransactionID;

public:
    Account(const long accNo, const double bal) : accountNumber(accNo)
    {
        balance = bal;
        transactionID = 0;
        transactionType = "None";
    }

    long depositAmount(const long to, const long from, const double amount)
    {
        if (accountNumber == to)
        {
            balance += amount;
            transactionID = ++nextTransactionID;
            transactionType = "Credit";
            return transactionID;
        }
        return -1;
    }

    long creditAmount(const long to, const long from, const double amount)
    {
        if (accountNumber == from && balance >= amount)
        {
            balance -= amount;
            transactionID = ++nextTransactionID;
            transactionType = "Debit";
            return transactionID;
        }
        return -1;
    }

    void displayDetails() const
    {
        cout << "Account No: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Last Transaction ID: " << transactionID << endl;
        cout << "Transaction Type: " << transactionType << endl;
        cout << endl;
    }
    long getAccountNumber() const
    {
        return accountNumber;
    }
};

long Account::nextTransactionID = 1000;

int main()
{
    Account a1(101, 1000);
    Account a2(102, 2000);
    Account a3(103, 3000);
    Account a4(104, 4000);
    Account a5(105, 5000);

    long tId;

    tId = a1.creditAmount(102, 101, 200);
    if (tId != -1)
        a2.depositAmount(102, 101, 200);

    tId = a3.creditAmount(104, 103, 500);
    if (tId != -1)
        a4.depositAmount(104, 103, 500);

    tId = a5.creditAmount(101, 105, 300);
    if (tId != -1)
        a1.depositAmount(101, 105, 300);

    a1.displayDetails();
    a2.displayDetails();
    a3.displayDetails();
    a4.displayDetails();
    a5.displayDetails();

    return 0;
}