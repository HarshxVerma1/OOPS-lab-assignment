#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream in("input.txt");
    ofstream out("output.txt");
    char ch;
    while(in.get(ch)){
        out.put(ch);
    }
    in.close();
    out.close();
    return 0;
}