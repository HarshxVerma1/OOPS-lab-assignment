#include <iostream>

class Complex {
private:
    int real;
    int imag;

public:
    Complex(int r, int i) {
        this->real = r;
        this->imag = i;
    }

    Complex(const Complex &c) {
        this->real = c.real;
        this->imag = c.imag;
    }

    void display() {
        std::cout << real << " + " << imag << "i" << std::endl;
    }

    friend void sum(Complex, Complex);
};

void sum(Complex c1, Complex c2) {
    int r = c1.real + c2.real;
    int i = c1.imag + c2.imag;
    std::cout << "Sum = " << r << " + " << i << "i" << std::endl;
}

int main() {
    Complex c1(2, 3);
    Complex c2(4, 5);

    Complex c3 = c1;

    c1.display();
    c2.display();
    c3.display();

    sum(c1, c2);

    return 0;
}