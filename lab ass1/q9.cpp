#include<iostream>
using namespace std;
int main(){
    int a,b,op;
    cout<<"ente the no.s";
    cin>>a>>b;
    cout<<"1.Add 2.Subtract 3.Multiply 4.Divide";
    cin>>op;
    switch(op){
        case 1: cout<<a+b; break;
        case 2: cout<<a-b; break;
        case 3: cout<<a*b; break;
        case 4: cout<<a/b; break;
        default: cout<<"choose correct arithmetic operation";
        
    }
    return 0;

}