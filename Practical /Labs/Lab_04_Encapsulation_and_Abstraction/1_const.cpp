// This example demonstrates const data members and constructor initialization lists in C++.
#include <iostream> 
class Seat { 
    const int seatNumber; 
public: 
    Seat() : seatNumber(10) {} 
    Seat(int number) : seatNumber(number) {} 
    int getNumber() const { return seatNumber; } 
}; 
int main() { 
    Seat first; 
    Seat second(20); 
    std::cout << first.getNumber() << '\n'; 
    std::cout << second.getNumber() << '\n'; 
} 
// Invalid alternative constructor, shown for diagnosis: 
// Seat() { seatNumber = 10; } 
// Invalid later update inside a method: 
// seatNumber = 30;

/*
Key lesson: A const data member must be initialized through a constructor initialization 
list, and its value cannot be reassigned afterward.
*/