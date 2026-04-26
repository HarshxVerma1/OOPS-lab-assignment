#include<iostream>
using namespace std;
template<class T>
T linearSearch(T a[],T key,int size){
    for(int i=0;i<size;i++){
        if(a[i]==key) return i;
    }
    return -1;

}
int main(){
    int a[]={1,2,3,4,5};
    cout<<linearSearch(a,6,5);

    return 0;
}