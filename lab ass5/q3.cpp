#include <iostream>
using namespace std;

class Base {
public:
    int x;
protected:
    int y;
};

class PublicDerived : public Base {
public:
    void set() {
        x = 1;
        y = 2;
    }
    void show() {
        cout << "Public: " << x << " " << y << endl;
    }
};

class ProtectedDerived : protected Base {
public:
    void set() {
        x = 3;
        y = 4;
    }
    void show() {
        cout << "Protected: " << x << " " << y << endl;
    }
};

class PrivateDerived : private Base {
public:
    void set() {
        x = 5;
        y = 6;
    }
    void show() {
        cout << "Private: " << x << " " << y << endl;
    }
};

int main() {
    PublicDerived a;
    a.set();
    a.show();
    cout << a.x << endl;

    ProtectedDerived b;
    b.set();
    b.show();

    PrivateDerived c;
    c.set();
    c.show();

    return 0;
}