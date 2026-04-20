#include <iostream>
using namespace std;
class BankAccount
{
protected:
    double balance;

public:
    BankAccount(double bal)
    {
        balance = bal;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amt)
    {
        balance -= amt;
    }

    void display()
    {
        cout << "Current balance : " << balance << endl;
    }
};

class SavingAccount : public BankAccount
{
public:
    SavingAccount(double bal) : BankAccount(bal) {};

    void interest()
    {
        balance += balance * 0.05;
    }
};

class CurrentAccount : public SavingAccount
{
public:
    CurrentAccount(double b) : SavingAccount(b) {};
};

int main()
{
    SavingAccount S(2000);
    S.deposit(5000);
    S.display();
    S.interest();
    S.display();

    return 0;
}