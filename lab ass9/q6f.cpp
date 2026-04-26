#include<iostream>
#include<fstream>
using namespace std;

int main(){
    fstream file("test.txt", ios::out | ios::in);

    string str = "HelloWorld";

    // write and show position
    for(int i=0; i<str.length(); i++){
        file.put(str[i]);
        cout << "Position: " << file.tellp() << endl;
    }

    // replace "World" with "C++"
    file.seekp(5);   // start of "World"
    file << "C++";

    file.close();
}