//3.	Write a program to add data objects of two different classes using friend functions
#include<iostream>
using namespace std;
class y;  //forward declaration
class x{
    int a;
    friend int sum(x a1,y b1);
    public:
    void setData(int val){
        a=val;
    }
    void display(){
        cout<<"a:"<<a<<endl;
    }
};
class y{
    int b;
     friend int sum(x a1,y b1);
    public:
    void setData(int val){
        b=val;
    }
     void display(){
        cout<<"b:"<<b<<endl;
    }

};
int sum(x a1,y b1){
    return a1.a + b1.b;
}
int main(){
    x n1;
    y n2;
    n1.setData(4);
    n2.setData(8);
    cout<<"the sum is :"<<sum(n1,n2);
    

    return 0;
}