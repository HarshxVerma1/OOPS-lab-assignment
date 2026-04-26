#include<iostream>
using namespace std;

template<class T>
class Array{
    T* arr;
    int size;

public:
    Array(int s){
        size = s;
        arr = new T[size];
    }
    void input(){
        cout << "Enter " << size << " elements:\n";
        for(int i = 0; i < size; i++){
            cin >> arr[i];
        }
    }
    void display(){
        cout << "Array elements: ";
        for(int i = 0; i < size; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    ~Array(){
        delete[] arr;
    }
};

int main(){
    Array<int> a(5);

    a.input();
    a.display();

    return 0;
}