#include <iostream>
#include <cstring>
using namespace std;

class STRING {
    char str[100];

public:
    void input() {
        cin >> str;
    }

    void show() {
        cout << str << endl;
    }

    bool operator==(STRING s) {
        return strcmp(str, s.str) == 0;
    }

    STRING operator+(STRING s) {
        STRING temp;
        strcpy(temp.str, str);
        strcat(temp.str, s.str);
        return temp;
    }
};

int main() {
    STRING s1, s2, s3;
    s1.input();
    s2.input();

    s3 = s1 + s2;
    s3.show();

    if (s1 == s2)
        cout << "Equal" << endl;
    else
        cout << "Not Equal" << endl;

    return 0;
}