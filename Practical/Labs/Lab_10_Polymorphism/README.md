# Lab 09 – Polymorphism

## Objectives

* Understand runtime polymorphism.
* Use virtual functions.
* Use base-class pointers.
* Override functions.

## Practice

Create the following class hierarchy:

```text
Shape
 |
 +--- Circle
 |
 +--- Rectangle
 |
 +--- Triangle
```

Each derived class should implement an `area()` function using a virtual function.

## Challenge

Store different shapes using:

```cpp
vector<Shape*>
```

and calculate their areas polymorphically.
