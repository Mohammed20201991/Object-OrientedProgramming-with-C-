# Lab 17 – Lambda Expressions and Modern C++
## Objectives
Introduce students to modern C++ programming concepts and features.

## Topics
* `auto`
* `nullptr`
* Range-Based `for` Loops
* Lambda Expressions
* `override`
* `final`
* Smart Pointers

## Practice
Use a range-based `for` loop with `auto`:
```cpp
for (const auto& student : students)
{
    student.display();
}
```

## Lambda Expression
Use a lambda expression to sort numbers in descending order:
```cpp
sort(
    numbers.begin(),
    numbers.end(),
    [](int a, int b)
    {
        return a > b;
    }
);
```
