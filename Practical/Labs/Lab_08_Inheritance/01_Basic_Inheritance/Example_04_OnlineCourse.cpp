#include <iostream>
#include <string>
using namespace std;

class Course {
public:
    string title;

    void showCourse() {
        cout << "Course: " << title << endl; 
    }
};

class VideoCourse : public Course {
public:
    int videoCount;

    void showVideos() {
        cout << "Number of videos: " << videoCount << endl;
    }
};

int main() {
    VideoCourse course;

    course.title = "C++ Programming";
    course.videoCount = 12;

    course.showCourse();
    course.showVideos();

    return 0;
}
