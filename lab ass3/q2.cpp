//2.	Write a program to swap private values of two classes using a friend function.
#include<iostream>
using namespace std;
class y;  //forward declaration
class x{
    int a;
    friend void exchange(x &,y&);
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
    friend void exchange(x &,y&);
    public:
    void setData(int val){
        b=val;
    }
     void display(){
        cout<<"b:"<<b<<endl;
    }

};
void exchange(x &a1,y &b1){
    int temp=a1.a;
    a1.a=b1.b;
    b1.b=temp;

}
int main(){
    x x1;
    y y1;
    x1.setData(10);
    y1.setData(20);
    cout<<"before swap"<<endl;
    x1.display();
    y1.display();
    exchange(x1,y1);
    cout<<"after swap:"<<endl;
    x1.display();
    y1.display();
    

    return 0;
}