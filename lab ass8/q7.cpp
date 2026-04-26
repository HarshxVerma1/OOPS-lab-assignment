#include<iostream>
using namespace std;
template<class T>
class queue{
    T*a;
    int front;
    int rear;
    int size;
    public:
    queue(int size){
        front=0;
        rear=0;
        this->size=size;
        a=new T[size];
    }
    void enqueue(T element){
        if(rear==size) cout<<"queue overflow";
        else{
            a[rear]=element;
            rear++;
        }
    }
    void dequeue(){
        if(front==rear) cout<<"queue underflow";
        else{
            a[front]=-1;
            front++;
        }
    }
    void display(){
        if(front==rear) cout<<"empty";
        else{
            for(int i=front;i<=rear;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
    }
};
int main(){
    queue<float>q(5);
    q.enqueue(1.1);
    q.enqueue(2.5);
    q.enqueue(3.7);
    q.enqueue(3.7);
    q.enqueue(3.7);
    q.display();
    q.dequeue();
     q.dequeue();
     q.display();
    
    return 0;
}