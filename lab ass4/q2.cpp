#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l = 0, int b = -1)
    {
        length = l;
        if (b == -1)
        {
            breadth = l;
        }
        else
        {
            breadth = b;
        }
        cout << "Constructor called for " << length << "x" << breadth << endl;
    }
    ~Rectangle()
    {
        cout << "Destructor called for Rectangle with area: " << calculateArea() << endl;
    }
    int calculateArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle rects[3] = {
        Rectangle(),
        Rectangle(10, 5),
        Rectangle(7)};
    for (int i = 0; i < 3; i++)
    {
        cout << "Rectangle " << i + 1 << " Area: " << rects[i].calculateArea() << endl;
    }
    cout << "\n"
         << endl;
    return 0;
}