#include <iostream>
using namespace std;
class Base {
protected:
    int num;

public:
    void setNum(int n) {
        num = n;
    }
};
class Derived : public Base {
public:
    void display() {
        cout << "Value of num = " << num << endl;
    }
};
int main() {
    Derived obj;
    obj.setNum(10);
    obj.display();
    return 0;
}