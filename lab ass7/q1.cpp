#include <iostream>
using namespace std;

class Polygon {
protected:
    int width, height;

public:
    void set_value(int w, int h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Polygon {
public:
    int calculate_area() {
        return width * height;
    }
};

class Triangle : public Polygon {
public:
    int calculate_area() {
        return (width * height) / 2;
    }
};

int main() {
    Polygon *p;  
    Rectangle r;
    Triangle t;
    p = &r;
    p->set_value(10, 5);
    cout << "Rectangle Area: " << r.calculate_area() << endl;
    p = &t;
    p->set_value(10, 5);
    cout << "Triangle Area: " << t.calculate_area() << endl;
    return 0;
}