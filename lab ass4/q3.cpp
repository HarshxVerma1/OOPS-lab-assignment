#include <iostream>
using namespace std;

class Rectangle {
private:
    double length, breadth;

public:
    // Constructor (Rule iv: No return type)
    Rectangle(double l = 0, double b = 0) : length(l), breadth(b) {
        cout << "Constructor: Object created (" << length << "x" << breadth << ")" << endl;
    }

    // VERIFICATION OF DESTRUCTOR RULES:
    // (i)   Name begins with ~ and matches class name.
    // (iii) No parameters allowed (empty parentheses).
    // (iv)  No return type (not even void).
    ~Rectangle() {
        cout << "Destructor: Cleaning up object with Area " << (length * breadth) << endl;
    }

    // (ii) Note: If we added another "~Rectangle(int x)", the compiler would 
    //      throw an error: "destructors may not have parameters" or 
    //      "cannot overload destructors".
};

int main() {
    cout << "--- Entering Scope ---" << endl;
    {
        // Creating a local object
        Rectangle tempRect(10, 5);
        cout << "Inside the block..." << endl;
    } // Object goes out of scope here; Destructor is called automatically.

    cout << "--- Exited Scope ---" << endl;
    return 0;
}