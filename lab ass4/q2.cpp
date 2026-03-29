#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    // Combined Constructor using Default Arguments
    // This handles:
    // 1. No params (0,0)
    // 2. One param (side, side) - handled by logic inside
    // 3. Two params (l, b)
    Rectangle(double l = 0, double b = -1) {
        length = l;
        // If only one argument is passed, b remains -1
        if (b == -1) {
            breadth = l; 
        } else {
            breadth = b;
        }
        cout << "Constructor called for " << length << "x" << breadth << endl;
    }

    // Destructor
    ~Rectangle() {
        cout << "Destructor called for Rectangle with area: " << calculateArea() << endl;
    }

    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    // Creating an array of 3 Rectangle objects
    // Each element calls the constructor with different arguments
    Rectangle rects[3] = {
        Rectangle(),          // Case (a): No parameters (0,0)
        Rectangle(10, 5),     // Case (b): Two parameters (10,5)
        Rectangle(7)          // Case (c): One parameter (7,7)
    };

    cout << "\n--- Calculating Areas ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "Rectangle " << i + 1 << " Area: " << rects[i].calculateArea() << endl;
    }
    cout << "-------------------------\n" << endl;

    // Destructors will be called automatically when main() ends
    return 0;
}