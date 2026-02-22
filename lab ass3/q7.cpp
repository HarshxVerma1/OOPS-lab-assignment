#include <iostream>
using namespace std;

class Sample {
    int num;

public:
    void setData(int n) {
        num = n;
    }

    void showData() {
        cout << "Value = " << num << endl;
    }

    // Pass-by-Value
    Sample addValue(Sample obj) {
        obj.num = obj.num + 10;
        return obj;   // returning object
    }

    // Pass-by-Reference
    Sample addReference(Sample &obj) {
        obj.num = obj.num + 20;
        return obj;   // returning object
    }
};

int main() {
    Sample s1, s2, s3;

    s1.setData(5);

    cout << "Original Object:\n";
    s1.showData();

    // Pass by Value
    s2 = s1.addValue(s1);
    cout << "\nAfter Pass-by-Value:\n";
    s2.showData();

    // Pass by Reference
    s3 = s1.addReference(s1);
    cout << "\nAfter Pass-by-Reference:\n";
    s3.showData();

    return 0;
}