#include <iostream>
using namespace std;

class Student {
private:
    char name[30];
    int rollNo;
    char degree[20];
    char hostel[20];
    float cgpa;

    // Private member function
    void updateDetails() {
        cout << "\nUpdating all details...\n";
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Degree: ";
        cin >> degree;
    }

public:
    // Public member function
    void addDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Degree: ";
        cin >> degree;
        cout << "Enter Hostel: ";
        cin >> hostel;
        cout << "Enter CGPA: ";
        cin >> cgpa;
    }

    void updateCGPA(float newCGPA) {
        cgpa = newCGPA;
    }

    void updateHostel(char newHostel[]) {
        int i = 0;
        while (newHostel[i] != '\0') {
            hostel[i] = newHostel[i];
            i++;
        }
        hostel[i] = '\0';
    }

    // Public function calling private function
    void callUpdateDetails() {
        updateDetails();   // private function called here
    }

    void displayDetails() {
        cout << "\nStudent Details\n";
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Degree: " << degree << endl;
        cout << "Hostel: " << hostel << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main() {
    Student s;
    s.addDetails();
    s.updateCGPA(8.5);
    s.displayDetails();
    return 0;
}
