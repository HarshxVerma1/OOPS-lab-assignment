#include <iostream>
using namespace std;

class Test {
    float x;

public:
    Test(float f) {
        x = f;
    }

    operator float() {
        return x;
    }
};

int main() {
    Test t(7.5);
    float f = t;
    cout << f;
    return 0;
}