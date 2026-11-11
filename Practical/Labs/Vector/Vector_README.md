# C++ `vector` -- Practical Guide

## 1. Learning objectives

By the end of this lesson, students should be able to:

-   Explain what `std::vector` is and when to use it.
-   Create vectors and access their elements.
-   Add, remove, and update elements.
-   Traverse a vector using loops and iterators.
-   Use common vector member functions.
-   Pass a vector to a function.

## 2. What is a vector?

`std::vector` is a sequence container provided by the C++ Standard
Library. It stores elements of the same type in a dynamically resizable
array.

Unlike a normal fixed-size array, a vector can grow or shrink while the
program is running.

To use a vector, include the `<vector>` header:

``` cpp
#include <iostream>
#include <vector>
using namespace std;
```

A vector declaration follows this form:

``` cpp
vector<data_type> vector_name;
```

Examples:

``` cpp
vector<int> numbers;
vector<double> prices;
vector<string> names;
```

## 3. Example 1 -- Creating and displaying a vector

``` cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers = {10, 20, 30, 40};

    for (int i = 0; i < numbers.size(); i++) {
        cout << numbers[i] << " ";
    }

    return 0;
}
```

**Output:**

``` text
10 20 30 40
```

Important points:

-   Vector indexing starts at `0`.
-   `size()` returns the number of elements.
-   `numbers[i]` accesses the element at index `i`.

## 4. Example 2 -- Adding elements with `push_back()`

`push_back()` adds a new element to the end of the vector.

``` cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks;

    marks.push_back(75);
    marks.push_back(88);
    marks.push_back(92);

    for (int mark : marks) {
        cout << mark << endl;
    }

    return 0;
}
```

**Output:**

``` text
75
88
92
```

The range-based `for` loop visits each element in the vector.

## 5. Example 3 -- Reading values from the user

``` cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int count, value;

    cout << "How many numbers? ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> value;
        numbers.push_back(value);
    }

    cout << "Entered numbers: ";
    for (int number : numbers) {
        cout << number << " ";
    }

    return 0;
}
```

## 6. Example 4 -- Accessing and updating elements

Use `at(index)` or the subscript operator `[]` to access an element.

``` cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> students = {"Ali", "Sara", "Omar"};

    cout << "First student: " << students.at(0) << endl;

    students[1] = "Mona";

    cout << "Updated list:" << endl;
    for (const string& student : students) {
        cout << student << endl;
    }

    return 0;
}
```

**Output:**

``` text
First student: Ali
Updated list:
Ali
Mona
Omar
```

`at()` performs bounds checking and throws an exception for an invalid
index. `[]` does not perform bounds checking.

## 7. Example 5 -- Removing elements

-   `pop_back()` removes the last element.
-   `erase()` removes an element at a specified position.
-   `clear()` removes all elements.

``` cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values = {10, 20, 30, 40, 50};

    values.pop_back();             // Removes 50
    values.erase(values.begin() + 1); // Removes 20

    for (int value : values) {
        cout << value << " ";
    }

    return 0;
}
```

**Output:**

``` text
10 30 40
```

`begin()` refers to the first element. Therefore, `begin() + 1` refers
to the second element.

Do not call `pop_back()` on an empty vector.

## 8. Example 6 -- Useful vector functions

  Function         Purpose
  ---------------- --------------------------------------------------
  `size()`         Returns the number of elements
  `empty()`        Checks whether the vector is empty
  `push_back(x)`   Adds `x` at the end
  `pop_back()`     Removes the last element
  `front()`        Accesses the first element
  `back()`         Accesses the last element
  `at(i)`          Accesses an element with bounds checking
  `clear()`        Removes all elements
  `capacity()`     Returns the currently allocated storage capacity

Example:

``` cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> data = {5, 10, 15};

    cout << "Size: " << data.size() << endl;
    cout << "Capacity: " << data.capacity() << endl;
    cout << "First: " << data.front() << endl;
    cout << "Last: " << data.back() << endl;
    cout << "Is empty? " << (data.empty() ? "Yes" : "No") << endl;

    data.clear();

    cout << "Size after clear: " << data.size() << endl;

    return 0;
}
```

**Note:** `size()` is the number of stored elements, while `capacity()`
is the number of elements the vector can hold in its currently allocated
storage without reallocating. Capacity is not the same as size.

## 9. Example 7 -- Finding the sum and average

``` cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> marks = {80, 70, 90, 60, 100};

    int sum = 0;

    for (int mark : marks) {
        sum += mark;
    }

    double average = 0;

    if (!marks.empty()) {
        average = static_cast<double>(sum) / marks.size();
    }

    cout << "Total: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
```

**Output:**

``` text
Total: 400
Average: 80
```

## 10. Example 8 -- Passing a vector to a function

A vector can be passed to a function by reference. Use a `const`
reference when the function only needs to read the elements.

``` cpp
#include <iostream>
#include <vector>
using namespace std;

void display(const vector<int>& numbers) {
    for (int number : numbers) {
        cout << number << " ";
    }
    cout << endl;
}

int main() {
    vector<int> values = {3, 6, 9, 12};

    display(values);

    return 0;
}
```

**Why use `const vector<int>&`?**

-   `&` avoids copying the entire vector.
-   `const` prevents the function from modifying the vector.

## 11. Vector versus normal array

  -----------------------------------------------------------------------
  Feature                 Normal array            `vector`
  ----------------------- ----------------------- -----------------------
  Size                    Fixed after declaration Can grow or shrink

  Memory management       Usually handled through Managed by the vector
                          array declaration       

  Number of elements      Fixed                   Dynamic

  `size()` member         No                      Yes
  function                                        

  Standard header         No special header for   `<vector>`
                          built-in arrays         
  -----------------------------------------------------------------------

## 12. Common mistakes

1.  **Accessing an invalid index:** For a vector of size 3, valid
    indices are `0`, `1`, and `2`.
2.  **Confusing size and capacity:** `capacity()` may be greater than
    `size()`.
3.  **Removing from an empty vector:** Check `empty()` before calling
    `pop_back()`.
4.  **Using `pop_back()` to remove a specific element:** It only removes
    the last element. Use `erase()` for a particular position.
5.  **Forgetting the header:** Include `#include <vector>`.

## 13. Practice exercises

### Exercise 1 -- Student Marks

Write a C++ program that:

-   Reads the number of students.
-   Stores each student's mark in a `vector<int>`.
-   Displays all marks.
-   Calculates and displays the highest and lowest marks.

### Exercise 2 -- Positive and Negative Numbers

Write a program that reads 10 integers into a vector and displays:

-   All positive numbers.
-   All negative numbers.
-   The number of zeros.

### Exercise 3 -- Remove a Value

Create a vector containing:

``` cpp
{10, 20, 30, 20, 40, 50}
```

Ask the user to enter a value, then remove all occurrences of that value
and display the updated vector.

### Exercise 4 -- Product Prices

Create a `vector<double>` to store product prices. Allow the user to add
prices, display all prices, and calculate the total cost.

### Exercise 5 -- Function Practice

Write a function named `findMaximum` that receives a vector of integers
and returns its largest element. Handle an empty vector appropriately.

## 14. Compilation and execution

Save a program as `main.cpp`.

Compile using g++:

``` bash
g++ -std=c++17 main.cpp -o main
```

Run on Windows:

``` bash
main.exe
```

Run on Linux or macOS:

``` bash
./main
```

## 15. Summary

`std::vector` is a useful Standard Library container for storing a
variable number of elements. It provides convenient operations for
adding, accessing, updating, and removing elements. It is also a
practical example of using a library class and its public member
functions in C++.
