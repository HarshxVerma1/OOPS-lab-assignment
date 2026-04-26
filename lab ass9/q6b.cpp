#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file("file.txt",ios::in | ios::out);
    file.seekp(4);
    file<<'X';
    file.close();
    
    ifstream fin("file.txt");
    char ch;
    while(fin.get(ch)){
        cout << ch;
    }
    fin.close();
    return 0;
}