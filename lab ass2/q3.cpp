#include <iostream>
using namespace std;

class Demo {
private:
    void privateFunction() {
        cout << "This is a private function\n";
    }

public:
    void publicFunction() {
        cout << "Public function called\n";
        privateFunction();  
    }
};

int main() {
    Demo obj;
    obj.publicFunction();  
    return 0;
}
