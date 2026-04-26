#include <iostream>
#include <cmath>
using namespace std;

double area(double base, double height) {
    return 0.5 * base * height;
}

double area(double side) {
    return (sqrt(3) / 4) * side * side;
}

double area(double equalSide, double base) {
    return (base / 4) * sqrt(4 * equalSide * equalSide - base * base);
}

int main() {
    double b, h, s, a, base;

    cout << "Enter base and height for right triangle: ";
    cin >> b >> h;
    cout << "Area: " << area(b, h) << endl;

    cout << "Enter side for equilateral triangle: ";
    cin >> s;
    cout << "Area: " << area(s) << endl;

    cout << "Enter equal side and base for isosceles triangle: ";
    cin >> a >> base;
    cout << "Area: " << area(a, base) << endl;

    return 0;
}