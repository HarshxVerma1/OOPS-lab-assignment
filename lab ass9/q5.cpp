#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char str[100];
    cout << "Enter a string: ";
    cin.getline(str, 100);

   
    int len = strlen(str);
    cout << "Length: " << len << endl;

    
    ofstream fout("text.txt");
    fout << str;
    fout.close();

    char ch;
    ifstream fin("text.txt");

    cout << "Content from file: ";
    while(fin.get(ch)){
        cout << ch;
    }

    fin.close();

    return 0;
}