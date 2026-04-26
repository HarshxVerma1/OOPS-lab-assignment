#include <iostream>
using namespace std;

class Test {
    float x;

public:
    Test(float f) {
        x = f;
    }

    void show() {
        cout << x << endl;
    }
};

int main() {
    Test t = 5.5;
    t.show();
    return 0;
}