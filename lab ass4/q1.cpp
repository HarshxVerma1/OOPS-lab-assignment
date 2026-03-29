#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    // (a) Constructor with no parameters
    Rectangle() {
        length = 0;
        breadth = 0;
    }

    // (b) Constructor with two parameters
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }

    // (c) Constructor with one parameter
    Rectangle(double side) {
        length = side;
        breadth = side;
    }

    // Function to calculate area
    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    // Creating objects using different constructors
    Rectangle rect1;              // No parameters
    Rectangle rect2(10, 5);       // Two parameters
    Rectangle rect3(7);           // One parameter (Square)

    // Printing the areas
    cout << "Area of Rectangle 1 (0 parameters): " << rect1.calculateArea() << endl;
    cout << "Area of Rectangle 2 (2 parameters): " << rect2.calculateArea() << endl;
    cout << "Area of Rectangle 3 (1 parameter): " << rect3.calculateArea() << endl;

    return 0;
}