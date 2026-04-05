#include <iostream>
using namespace std;

class Rectangle {
private:
    int length, breadth;

public:
    Rectangle(int l = 0, int b = 0) : length(l), breadth(b) {
        cout << "Constructor: Object created (" << length << "x" << breadth << ")" << endl;
    }    ~Rectangle() {
        cout << "Destructor: Cleaning up object with Area " << (length * breadth) << endl;
    }
};

int main() {
    {
        Rectangle tempRect(10, 5);
        cout << "Inside the block..." << endl;
    } 
    cout << "--- Exited Scope ---" << endl;
    return 0;
}