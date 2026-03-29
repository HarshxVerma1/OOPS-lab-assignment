#include <iostream>
using namespace std;

class Rectangle {
private:
    float length, breadth;
public:
    Rectangle() : length(5.0), breadth(4.0) {
        cout << "Constructor: Object created." << endl;
    }
    ~Rectangle() {
        cout << "Destructor: Object destroyed." << endl;
    }
    float getArea() { return length * breadth; }
};

int main() {
    // 1. Integer Variable
    int* ptrInt = new int(25);
    
    // 2. Float Variable
    float* ptrFloat = new float(10.5f);

    // 3. Integer Array
    int* arrInt = new int[3]{10, 20, 30};

    // 4. Float Array
    float* arrFloat = new float[2]{1.1f, 2.2f};

    // 5. Single Class Object
    Rectangle* ptrRect = new Rectangle();

    // 6. Array of Objects
    Rectangle* rectArray = new Rectangle[2];

    // Displaying some values
    cout << "\n--- Dynamic Memory Values ---" << endl;
    cout << "Int Variable: " << *ptrInt << endl;
    cout << "Float Variable: " << *ptrFloat << endl;
    cout << "Array Int [1]: " << arrInt[1] << endl;
    cout << "Object Area: " << ptrRect->getArea() << endl;
    cout << "-----------------------------\n" << endl;

    // Use 'delete' for single variables/objects
    delete ptrInt;
    delete ptrFloat;
    delete ptrRect;

    // Use 'delete[]' for arrays (CRITICAL for calling destructors on all elements)
    delete[] arrInt;
    delete[] arrFloat;
    delete[] rectArray;

    return 0;
}