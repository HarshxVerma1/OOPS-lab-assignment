#include <iostream>
using namespace std;

class Array {
    int a[5];

public:
    int& operator[](int i) {
        if (i < 0 || i >= 5) {
            cout << "Out of bounds" << endl;
            exit(0);
        }
        return a[i];
    }
};

int main() {
    Array obj;
    obj[0] = 10;
    obj[1] = 20;
    cout << obj[0] << " " << obj[1];
    return 0;
}