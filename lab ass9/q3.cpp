#include<iostream>
#include<fstream>
using namespace std;
class num{
    public:
    int a;
};
int main(){
    num n;
    cin>>n.a;
    ofstream out("num.dat",ios::binary);
    out.write((char*)&n,sizeof(n));
    out.close();
    ifstream in("num.dat",ios::binary);
     num n2;
    in.read((char*)&n2, sizeof(n2));
    in.close();
    cout<<n2.a;

    return 0;
}