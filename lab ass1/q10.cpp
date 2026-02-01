#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
  // using ternary operator
     (n % 2 == 0) ? cout << "Even" : cout << "Odd";
using if else
    if (n % 2 == 0)
        cout << "Even";
    else
        cout << "Odd";

    return 0;
}
