/*
Part 1: BankAccount class
Requirements: default constructor, parameterized constructor, deposit(), withdraw(), and display().
*/
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
private:
    string owner;
    double balance;
public:
    // Default constructor
    BankAccount()
    {
        owner   = "Unknown";
        balance = 0;
    }
    // Parameterized constructor
    BankAccount(string n, double b)
    {
        owner   = n;
        balance = b;
    }
    void deposit(double amount)
    {
        if (amount > 0)
            balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Invalid withdrawal!" << endl;
    }
    void display()
    {
        cout << "Owner: " << owner << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main()
{
    BankAccount b1;
    BankAccount b2("Ali", 1000);
    b1.display();
    cout << "\nAfter transactions:\n";
    b2.deposit(500);
    b2.withdraw(200);
    b2.display();
    return 0;
}

/*
Part 2: Constructor exercises
Exercise 1 — Student
Create a Student class with name, age, and grade.

Requirements:
- A default constructor initializes the values to "Unknown", 18, and 0.
- A parameterized constructor accepts all three values.
- A display() function prints the information.
Example object:
Student s1("Sara", 20, 85);


Exercise 2 — Product
Create a Product class with name and price.

Requirements:
- Default constructor: "Unknown", 0.
- Parameterized constructor: accepts a name and price.
- display() prints the product details.
Example:
Product p1("Laptop", 750);


Exercise 3 — Book
Create a Book class with title, author, and price.

Requirements:
- Default constructor initializes all members.
- Parameterized constructor accepts all three values.
- display() prints the book details.
Example:
Book b1("C++ Basics", "Ahmed", 25);


Exercise 4 — Employee
Create an Employee class with name, id, and salary.

Requirements:
- Default constructor initializes the members to suitable default values.
- Parameterized constructor accepts all three values.
- display() prints the employee details.
Example:
Employee e1("Omar", 101, 800);
*/