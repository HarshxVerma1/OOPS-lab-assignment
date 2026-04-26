#include<iostream>
using namespace std;

template<class T1, class T2>
class pairr {
    T1 first;
    T2 second;

public:
    pairr(T1 a, T2 b){
        first = a;
        second = b;
    }
    void display(){
        cout << "First: " << first << endl;
        cout << "Second: " << second << endl;
    }
};
int main(){
    pairr<int,float>p(2,3.3);
    p.display();
    pairr<int,char>p2(2,'Z');
    p2.display();
    return 0;
}