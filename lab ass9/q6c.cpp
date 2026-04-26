#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream fin("file.txt");

    fin.seekg(0, ios::end);   // go to end
    cout << "File size: " << fin.tellg() << " bytes";

    fin.close();
}