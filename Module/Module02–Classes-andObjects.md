# Module 2 – Classes and Objects

## Topics

* Class Definition
* Object Creation
* Data Members
* Member Functions
* Access Modifiers

  * `public`
  * `private`
  * `protected`
* Defining Functions Inside Classes
* Defining Functions Outside Classes
* Scope Resolution Operator `::`
* `this` Pointer

## Example Concept

```cpp
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    string name;
    int age;

public:
    void setName(string n);
    void display();
};
```
