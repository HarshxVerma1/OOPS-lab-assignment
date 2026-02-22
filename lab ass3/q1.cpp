#include <iostream>
using namespace std;

class Student {
    int roll;
    float marks;

public:
    // Constructor using this pointer
    Student(int roll, float marks) {
        this->roll = roll;      // differentiates data member from parameter
        this->marks = marks;
    }

    // Function to display data
    void display() {
        cout << "Roll No: " << roll << endl;
        cout << "Marks: " << marks << endl;
    }

    // Function returning current object using this pointer
    Student* getAddress() {
        return this;   // returns address of current object
    }
};

int main() {

    // (a) Using object and dot operator
    Student s1(101, 89.5);
    cout << "Using dot operator:" << endl;
    s1.display();   // dot operator

    cout << endl;

    // (b) Pointer to object and arrow operator
    Student *ptr = &s1;   // pointer to object

    cout << "Using arrow operator:" << endl;
    ptr->display();   // arrow operator

    cout << endl;

    // Using this pointer returned function
    Student *ptr2 = s1.getAddress();
    cout << "Using this pointer (returned address):" << endl;
    ptr2->display();

    return 0;
}