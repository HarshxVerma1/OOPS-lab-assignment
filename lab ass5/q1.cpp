#include <iostream>
#include <string>
using namespace std;

class Base {
protected:
    int protectedVar; // Accessible in derived class
public:
    void setVar(int v) { protectedVar = v; }
};

class Derived : public Base {
public:
    void display() {
        cout << "Accessing protected variable from Derived: " << protectedVar << endl;
    }
};

int main() {
    Base b;
    b.setVar(100);
    
    Derived d;
    d.setVar(200);
    d.display();
    return 0;
}