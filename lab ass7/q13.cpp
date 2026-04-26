#include <iostream>
#include <cmath>
using namespace std;

class Cartesian;

class Polar {
    float r, a;

public:
    Polar(float r, float a) {
        this->r = r;
        this->a = a;
    }

    friend class Cartesian;
};

class Cartesian {
    float x, y;

public:
    Cartesian() {}

    Cartesian(Polar p) {
        x = p.r * cos(p.a);
        y = p.r * sin(p.a);
    }

    void show() {
        cout << x << " " << y << endl;
    }
};

int main() {
    Polar p(10, 5);
    Cartesian c = p;
    c.show();
    return 0;
}