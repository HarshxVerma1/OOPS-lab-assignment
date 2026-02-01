#include <iostream>

// (b) Global variable
int x = 10;

class Demo {
public:
    static int count;          // (c) Static variable
    void show();               // (a) Function declaration
};

// (a) Class function defined outside the class
void Demo::show() {
    std::cout << "Function defined outside the class" << std::endl;
}

// (c) Static variable definition
int Demo::count = 5;

int main() {
    // (a) Calling function defined outside class
    Demo d;
    d.show();

    // (b) Local vs Global variable
    int x = 20;
    std::cout << "Local x = " << x << std::endl;
    std::cout << "Global x = " << ::x << std::endl;

    // (c) Access static variable using scope resolution
    std::cout << "Static count = " << Demo::count << std::endl;

    // (d) Using cin and cout with scope resolution
    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    std::cout << "You entered: " << a << std::endl;

    return 0;
}
