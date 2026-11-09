#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    double price;

public:
    // Write the default constructor here
    Book()
    {title = "tt"; price = 1000;}

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b1;
    b1.display();

    return 0;
}