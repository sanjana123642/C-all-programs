#include <iostream>
using namespace std;

class Bank
{
private:
    int balance = 5000; 

public:
    void deposit(int amt)
    {
        balance += amt;
        cout << "Balance after Deposit: " << balance << endl;
    }

    void withdraw(int amt)
    {
        if (amt > balance) 
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance -= amt;
            cout << "Balance after Withdraw: " << balance << endl;
        }
    }

    int getBalance() {
        return balance;
    }
};

int main()
{
    Bank b;

    b.deposit(2000);
    b.withdraw(1000);
    cout << "Current Balance: " << b.getBalance() << endl;

    return 0;
}
