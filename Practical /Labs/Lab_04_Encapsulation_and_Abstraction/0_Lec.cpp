/*
#include <iostream> 
int main() { 
    int x = 10; 
    int& ref = x; 
    ref = 50; 
    std::cout << x << " " << ref << '\n'; 
    int y = 80; 
    ref = y; 
    std::cout << x << " " << y << '\n'; 
    y = 90; 
    std::cout << x << " " << ref << " " << y << '\n'; 
}
*/
/*
#include <iostream> 
class Student { 
    int& grade; 
public: 
    Student(int& g) : grade(g) {} 
    void addMarks(int marks) { grade += marks; } 
    void display() const { 
        std::cout << "Grade: " << grade << '\n'; 
    }
    }; 
int main() { 
    int studentGrade = 70; 
    Student s1(studentGrade);
    s1.display(); 
    s1.addMarks(10); 
    s1.display(); 
    std::cout << "Original Grade: " << studentGrade << '\n'; 
} 
*/
/*
#include <iostream> 
#include <string> 
class Product { 
    std::string name; 
public: 
    Product(std::string n) : name(n) { 
        std::cout << "Construct " << name << '\n'; 
    } 
    ~Product() { 
        std::cout << "Destroy " << name << '\n'; 
    } 
    void display() { std::cout << name << '\n'; } 
}; 
int main() { 
    Product pen("Pen"); 
    pen.display(); 
} 
 */

 /*
#include <iostream> 
class Student { 
int& grade; 
public: 
Student(int& g) : grade(g) { g++; } 
int getgrade() const { return grade; } 
}; 
int main() { 
int x = 50; 
Student s1(x); // x becomes 51. 
int y = 80; 
// s1 = Student(y); // Error: deleted copy assignment. 
Student s3(y); // Valid new object; y becomes 81. 
std::cout << s1.getgrade() << " " << s3.getgrade() << '\n'; 
} 
*/

// Figure 25  Integrated application defining Product 
// C++17 example 
#include <iostream> 
#include <string> 
class Product { 
    std::string name; 
    int price; 
    int stock; 
public: 
    Product() : name("Unnamed"), price(0), stock(0) { 
        std::cout << "Construct " << name << '\n'; 
    } 
    Product(std::string n) : name(n), price(0), stock(0) { 
        if (name.empty()) name = "Unnamed"; 
        std::cout << "Construct " << name << '\n'; 
    } 
    Product(std::string n, int p, int q) 
        : name(n), price(p), stock(q) { 
        if (name.empty()) name = "Unnamed"; 
        if (price < 0) price = 0; 
        if (stock < 0) stock = 0; 
        std::cout << "Construct " << name << '\n'; 
    } 
    ~Product() { 
        std::cout << "Destroy " << name << '\n'; 
    } 
    bool sell(int amount) { 
        if (amount <= 0 || amount > stock) return false; 
        stock = stock - amount; 
        return true; 
    } 
    void display() { 
        std::cout << name << " | " << price 
                  << " | " << stock << '\n';
                  } 
}; 
int main() {
    Product p1;
    Product p2("Laptop");
    Product p3("Keyboard", 50, 10);
    p1.display();
    p2.display();
    p3.display();
    if (p3.sell(3)) {
        std::cout << "Sale successful.\n";
    } else {
        std::cout << "Sale failed.\n";
    }
    p3.display();

    if (!p3.sell(20)) {
        std::cout << "Not enough stock.\n";
    }
    return 0;
}
