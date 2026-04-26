#include<iostream>
using namespace std;

// i) Single parameter
template <class T>
void process(T a){
    cout << "Single parameter: " << a << endl;
}

// ii) Two parameters of SAME type
template <class T>
void process(T a, T b){
    cout << "Two same type: " << a << " , " << b << endl;
}

// iii) Two parameters of DIFFERENT types
template <class T1, class T2>
void process(T1 a, T2 b){
    cout << "Two different types: " << a << " , " << b << endl;
}

int main(){
    process(10);            // single parameter
    process(5, 15);         // same type (int, int)
    process(3.5, 'A');      // different types (double, char)

    return 0;
}