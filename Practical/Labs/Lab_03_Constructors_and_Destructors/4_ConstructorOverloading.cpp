// Constructor overloading means defining multiple constructors in the same class with different parameter lists.
#include <iostream>
#include <string>
using namespace std;
class Product
{
private:
    string name;
    double price;
public:
    Product()
    {
        name = "Unknown";
        price = 0;
    }

    Product(string n)
    {
        name = n;
        price = 0;
    }

    Product(string n, double p)
    {
        name = n;
        price = p;
    }

    void display()
    {
        cout << name << ": " << price << endl;
    }
};

int main()
{
    Product p1;
    Product p2("Mouse");
    Product p3("Keyboard", 40);

    p1.display();
    p2.display();
    p3.display();
    return 0;
}