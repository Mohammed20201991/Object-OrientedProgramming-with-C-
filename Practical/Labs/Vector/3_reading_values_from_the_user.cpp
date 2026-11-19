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