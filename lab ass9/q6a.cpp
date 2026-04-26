#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream out("file.txt");
    for(char ch='A';ch<='Z';ch++){
        out<<ch;
    }
    out.close();
    ifstream in("file.txt");
    in.seekg(9);
    char ch;
    in.get(ch);
    cout<<ch;
    in.close();
    return 0;
}
