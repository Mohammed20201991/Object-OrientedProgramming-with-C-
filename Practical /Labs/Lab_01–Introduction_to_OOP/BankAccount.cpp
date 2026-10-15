// 1. Problem: Should anyone be allowed to directly change a bank 
// account balance? (...)
#include <iostream>
using namespace std;
class BankAccount
{
public:
    string owner;
    double balance;
};
int main()
{
    BankAccount account;
    account.owner = "Ali";
    account.balance = 1000;
    // Anyone can change the balance
    account.balance = -5000;
    cout << account.balance << endl;
    return 0;
}


// "Is this safe?"
//2. Introduce private: Solution with Private Accessiblity 
/*
#include <iostream>
using namespace std;
class BankAccount
{
public:
    string owner;

private:
    double balance;
};

int main()
{
    BankAccount account;
    account.owner = "Ali";
    // ERROR
    account.balance = 1000;
    return 0;
}
    */

// public:Members can be accessed from outside the class:
// private: Members can only be accessed inside the class.
// 3. But how do we change the balance?
// By introduces member functions as the controlled interface

/*
#include <iostream>
using namespace std;
class BankAccount
{
private:
    double balance;

public:
    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    void displayBalance()
    {  cout << "Balance: " << balance << endl;  }
};

int main()
{
    BankAccount account;
    account.deposit(1000);
    account.withdraw(300);
    account.displayBalance();
    return 0;
}
*/
/*

             BankAccount
        ┌─────────────────────┐
        │ private             │
        │   balance           │
        │                     │
        │ public              │
        │   deposit()         │
        │   withdraw()        │
        │   displayBalance()  │
        └─────────────────────┘

| Modifier    | Meaning                                   |
| ----------- | ----------------------------------------- |
| `public`    | Can be accessed from outside the class    |
| `private`   | Can only be accessed inside the class     |
| `protected` | Mainly used with inheritance; teach later |
*/