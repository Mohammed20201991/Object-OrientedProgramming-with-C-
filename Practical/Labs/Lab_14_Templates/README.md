# Lab 13 – Templates
## Objectives
* Understand generic programming.
* Create function templates.
* Create class templates.

## Practice
Create a function template:
```cpp
template <typename T>
T maximum(T a, T b);
```

## Class Template
Create a `Box<T>` class:

```cpp
template <typename T>
class Box
{
private:
    T value;

public:
    Box(T value);
    T getValue();
};
```

## Challenge

Create a generic `Stack<T>` class using a class template.
