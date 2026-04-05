#include <iostream>
using namespace std;
class Rectangle
{
private:
    float length, breadth;

public:
    Rectangle() : length(5.0), breadth(4.0)
    {
        cout << "Constructor: Object created." << endl;
    }
    ~Rectangle()
    {
        cout << "Destructor: Object destroyed." << endl;
    }
    float getArea() { return length * breadth; }
};

int main()
{
    int *ptrInt = new int(25);
    float *ptrFloat = new float(10.5f);
    int *arrInt = new int[3]{10, 20, 30};
    float *arrFloat = new float[2]{1.1f, 2.2f};
    Rectangle *ptrRect = new Rectangle();
    Rectangle *rectArray = new Rectangle[2];
    cout << "\n--- Dynamic Memory Values ---" << endl;
    cout << "Int Variable: " << *ptrInt << endl;
    cout << "Float Variable: " << *ptrFloat << endl;
    cout << "Array Int [1]: " << arrInt[1] << endl;
    cout << "Object Area: " << ptrRect->getArea() << endl;
    delete ptrInt;
    delete ptrFloat;
    delete ptrRect;
    delete[] arrInt;
    delete[] arrFloat;
    delete[] rectArray;

    return 0;
}