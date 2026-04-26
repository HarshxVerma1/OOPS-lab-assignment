#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream fout("data.txt");
    fout << "Hello\nThis is file\nC++ programming";
    fout.close();

    ifstream fin("data.txt");

    fin.seekg(10);   // move to 10th byte

    cout << "Position: " << fin.tellg() << endl;

    char ch;
    while(fin.get(ch)){
        cout << ch;
    }

    fin.close();
}