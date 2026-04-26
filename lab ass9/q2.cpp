#include<iostream>
#include<fstream>
using namespace std;
int countAlphabets(){
    ifstream in("NOTES.TXT");
    int count=0;
    char ch;
    while(in.get(ch)){
        if(isalpha(ch)) count++;
    }
    return count;
    in.close();
}
int main(){
    cout<<countAlphabets();
    return 0;
}