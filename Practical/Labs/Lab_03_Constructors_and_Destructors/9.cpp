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
}; 
int main() { 
    Product pen("Pen"); 
    { 
        Product book("Book"); 
        Product cup("Cup"); 
    } 
    std::cout << "Continue\n"; 
} 