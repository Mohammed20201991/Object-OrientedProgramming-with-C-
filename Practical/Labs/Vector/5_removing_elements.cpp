/*
pop_back() removes the last element.
erase() removes an element at a specified position.
clear() removes all elements.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> values = {10, 20, 30, 40, 50};
    values.pop_back();   
    values.pop_back(); 
     values.pop_back();
      values.pop_back(); 
       values.pop_back(); 
        values.pop_back();           // Removes 40
    values.erase(values.begin() + 1); // Removes 20

    for (int value : values) {
        cout << value << " ";
    }

    return 0;
}