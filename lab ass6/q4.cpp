#include <iostream>
#include <string>

class B;

class A {
private:
    int x;

public:
    A(int val) {
        this->x = val;
    }

    friend int addObjects(const A &, const B &);
};

class B {
private:
    int y;

public:
    B(int val) {
        this->y = val;
    }

    friend int addObjects(const A &, const B &);
};

int addObjects(const A &obj1, const B &obj2) {
    return obj1.x + obj2.y;
}

int main() {
    A obj1(10);
    B obj2(20);

    int result = addObjects(obj1, obj2);

    std::cout << "Sum = " << result << std::endl;

    return 0;
}