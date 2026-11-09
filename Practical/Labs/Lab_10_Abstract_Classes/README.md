# Lab 10 – Abstract Classes
## Objectives
* Understand pure virtual functions.
* Create abstract classes.
* Implement interfaces.

## Practice
Create an abstract `Shape` class:
```cpp
class Shape
{
public:
    virtual double area() = 0;
};
```

Implement the following derived classes:
* `Circle`
* `Rectangle`
* `Triangle`

## Challenge

Create an abstract `Payment` class with the following derived classes:
```text
Payment
 |
 +--- CashPayment
 |
 +--- CardPayment
 |
 +--- OnlinePayment
```
Implement a common virtual function for all payment types.
