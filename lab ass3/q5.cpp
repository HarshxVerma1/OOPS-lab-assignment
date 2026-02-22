//Write a program using Array of Objects to display area of multiple rectangles.
#include<iostream>
using namespace std;
class rectangle{
    int length,breadth;
    public:
    void setdata(int a,int b){
        length=a;breadth=b;
    }
    int area(){
        return length*breadth;
    }

};
int main(){
    rectangle r[5];
    for(int i=0;i<5;i++){
        int l, b;
        cout << "\nEnter length and breadth of rectangle " << i + 1 << ": ";
        cin >> l >> b;
        r[i].setdata(l, b);
    }
     for(int i=0;i<5;i++){
        cout << "Rectangle " << i + 1 << " Area = " << r[i].area() << endl;
    }

    return 0;
}