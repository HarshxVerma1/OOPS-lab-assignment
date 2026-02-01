#include <iostream>
using namespace std;

class Rectangle {
    int width, height;

public:
    // (a) Function to initialize values
    void getdata() {
        cout << "Enter width and height: ";
        cin >> width >> height;
    }

    // (b) Function to calculate and display area
    void calculatearea() {
        int area = width * height;
        cout << "Area of Rectangle = " << area << endl;
    }
};

int main() {
    Rectangle r;
    r.getdata();
    r.calculatearea();
    return 0;
}
