#include<iostream>
using namespace std;
template<class T1,class T2>
class Calc{
    T1 a;
    T2 b;
    public:
    Calc(T1 a,T2 b){
        this->a=a;
        this->b=b;
    }
    auto add(){
        return a+b;
    }
    auto subtract(){
        return a-b;
    }
    auto multiply(){
        return a*b;
    }
    auto divide(){
        return a/b;
    }
    

};
int  main(){
    Calc<int,float>a(5,5.5);
    cout<<a.add();
    cout<<a.multiply();
    cout<<a.divide();
    cout<<a.add();
    return 0;

}