#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    Rectangle(int side)
    {
        length = side;
        breadth = side;
    }
    int calculateArea()
    {
        return length * breadth;
    }
};
int main()
{
    Rectangle rect1;
    Rectangle rect2(10, 5);
    Rectangle rect3(7);
    cout << "Area of Rectangle 1 (0 parameters): " << rect1.calculateArea() << endl;
    cout << "Area of Rectangle 2 (2 parameters): " << rect2.calculateArea() << endl;
    cout << "Area of Rectangle 3 (1 parameter): " << rect3.calculateArea() << endl;
    return 0;
}