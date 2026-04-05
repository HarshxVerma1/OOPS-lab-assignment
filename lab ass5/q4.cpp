#include <iostream>
using namespace std;

class A {
public:
    int x;
    void showA() {
        cout << "Class A: " << x << endl;
    }
};

class B : public A {
public:
    void showB() {
        cout << "Single Inheritance B" << endl;
    }
};

class C : public A {
public:
    void showC() {
        cout << "Hierarchical Inheritance C" << endl;
    }
};

class D : public A {
public:
    void showD() {
        cout << "Hierarchical Inheritance D" << endl;
    }
};

class E {
public:
    int y;
};

class F : public A, public E {
public:
    void showF() {
        cout << "Multiple Inheritance F: " << x << " " << y << endl;
    }
};

class G : public B {
public:
    void showG() {
        cout << "Multilevel Inheritance G" << endl;
    }
};

int main() {
    B b;
    b.x = 10;
    b.showA();
    b.showB();

    C c;
    c.x = 20;
    c.showC();

    D d;
    d.x = 30;
    d.showD();

    F f;
    f.x = 40;
    f.y = 50;
    f.showF();

    G g;
    g.x = 60;
    g.showA();
    g.showG();

    return 0;
}