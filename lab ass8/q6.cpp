#include<iostream>
using namespace std;
template<class T>
class stack{
    private:
    T* a;
    int top;
    int size;
    public:
    stack(int size){
        this->size=size;
         top=-1;
        a=new T[size];
    }
    void push(T element){
        if(top<size-1){
            top++;
            a[top]=element;
        }
        else cout<<"stack overflow";
    }
    void pop(){
        if(top>=0){
            top--;
        }
        else cout<<"stack underflow";
    }
    void display(){
        if(top == -1){
        cout << "stack is empty\n";
        return;
    }

    if(top >= size){  
        cout << "Error: stack corrupted\n";
        return;
    }
        for(int i=top;i>=0;i--){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    stack<int>s(5);
    s.push(3);
    s.push(5);
    s.push(5);
    s.push(5);
    s.display();
    s.pop();
    s.pop();
    s.pop();
    s.display();
    
    
    return 0;
}