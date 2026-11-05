// A namespace can contain another namespace.
#include <iostream>
using namespace std;

namespace University {

    namespace AI {
        int students = 50;

                // namespace ML {
                // int students = 90;
                // }
    }

    namespace CS {
        int students = 40;
    }
}

int main() {
    cout << University::AI::students;
    cout<< endl;
    cout << University::CS::students;

    // cout<< endl;
    // cout << University::AI::ML::students;
    return 0;
}