#include<iostream>
using namespace std;
template <class T>
void bubbleSort(T a[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]) swap(a[j],a[j+1]);
        }
    }
}
int main(){
    int a[]={3,5,1,4,6,3};
    bubbleSort(a,6);
    for(int i=0;i<6;i++){
        cout<<a[i];
    }
    return 0;

}