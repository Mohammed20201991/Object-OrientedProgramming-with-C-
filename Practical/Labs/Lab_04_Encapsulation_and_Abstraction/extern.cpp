/*
الكلمة extern تُستخدم للإعلان عن متغير أو دالة موجودة في ملف آخر أو مُعرّفة في مكان آخر من البرنامج،
 دون إنشاء تعريف جديد لها.

 // File1.cpp
int x = 100;

// File2.cpp
#include <iostream>
using namespace std;

// خارجي (مُعرّف في مكان آخر)
extern int x;

int main() {
    cout << x; // 100
}
*/