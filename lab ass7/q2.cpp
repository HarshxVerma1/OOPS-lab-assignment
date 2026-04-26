#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
    virtual void display() = 0;
};

class Circle : public Shape
{
    float r, a;

public:
    void area()
    {
        cin >> r;
        a = 3.14 * r * r;
    }

    void display()
    {
        cout << "Circle Area = " << a << endl;
    }
};

class Rectangle : public Shape
{
    float l, b, a;

public:
    void area()
    {
        cin >> l >> b;
        a = l * b;
    }

    void display()
    {
        cout << "Rectangle Area = " << a << endl;
    }
};

class Triangle : public Shape
{
    float b, h, a;

public:
    void area()
    {
        cin >> b >> h;
        a = 0.5 * b * h;
    }

    void display()
    {
        cout << "Triangle Area = " << a << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;
    Triangle t;

    c.area();
    c.display();

    r.area();
    r.display();

    t.area();
    t.display();

    return 0;
}