#include <iostream>
using namespace std;

class Data {
    int x;

public:
    friend istream& operator>>(istream& in, Data& d);
    friend ostream& operator<<(ostream& out, Data& d);
};

istream& operator>>(istream& in, Data& d) {
    in >> d.x;
    return in;
}

ostream& operator<<(ostream& out, Data& d) {
    out << d.x;
    return out;
}

int main() {
    Data d;
    cin >> d;
    cout << d;
    return 0;
}