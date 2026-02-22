//4.	Write a program to demonstrate the working of friend class.
#include<iostream>
using namespace std;
class num
{
    int a,b;
    friend class calculator;
public:
    void setData(int val,int val2)
    {
        a = val; b=val2;
    }
   
};
class calculator{
    public:
    int add(num n1,num n2){
        return n1.a+n2.b;
    }
    int subtract(num n1,num n2){
        return n1.a-n2.b;
    }
    int multiply(num n1,num n2){
        return n1.a*n2.b;
    }
    float divide(num n1,num n2){
        return n1.a/n2.b;
    }

};

int main(){
    num n1;
    n1.setData(5,5);
    calculator c1;
    cout<<c1.add(n1,n1)<<endl;
    cout<<c1.subtract(n1,n1)<<endl;
    cout<<c1.multiply(n1,n1)<<endl;
    cout<<c1.divide(n1,n1)<<endl;
    return 0;
}
  