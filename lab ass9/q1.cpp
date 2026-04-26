#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out("NUM.TXT");
    for(int i=1;i<=200;i++){\
    out<<i<<" ";
}
out.close();
    return 0;
}