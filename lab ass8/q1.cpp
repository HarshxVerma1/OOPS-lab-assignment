#include<iostream>
using namespace std;
template<class T>
void swapp(T &a,T&b){
    T temp=a;
    a=b;
    b=temp;
}
int main(){
    int a,b;
    cout<<"enter a ,b";
    cin>>a>>b;
    cout<<"before swap:"<<a<<" "<<b;
    swapp(a,b);
    cout<<"after swap:"<<a<<" "<<b;

    return 0;
}