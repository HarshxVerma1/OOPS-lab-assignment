#include <iostream>
using namespace std;

class Test {
public:
    void operator()(int a, int b, int c) {
        cout << a + b + c << endl;
    }
};

int main() {
    Test t;
    t(1, 2, 3);
    return 0;
}