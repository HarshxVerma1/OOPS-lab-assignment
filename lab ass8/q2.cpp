#include<iostream>
using namespace std;
template<class T>
T findMin(T a[],int size){
    T min=a[0];
    for(int i=1;i<size;i++){
        if(min>a[i]) min=a[i];
    }
    return min;
}
int main(){
    int a[5]={2,5,1,3,4};
    cout<<findMin(a,5);

}