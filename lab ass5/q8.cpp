#include <iostream>
using namespace std;

class LibraryUser {
protected:
    string name;
    int id;
    string contact;

public:
    void setUser(string n, int i, string c) {
        name = n;
        id = i;
        contact = c;
    }

    void displayUser() {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Contact: " << contact << endl;
    }
};

class Student : public LibraryUser {
private:
    int grade;

public:
    void setStudent(string n, int i, string c, int g) {
        setUser(n, i, c);
        grade = g;
    }

    void displayStudent() {
        displayUser();
        cout << "Grade: " << grade << endl;
    }
};

class Teacher : public LibraryUser {
private:
    string department;

public:
    void setTeacher(string n, int i, string c, string d) {
        setUser(n, i, c);
        department = d;
    }

    void displayTeacher() {
        displayUser();
        cout << "Department: " << department << endl;
    }
};

int main() {
    Student s;
    s.setStudent("Harsh", 101, "9876543210", 3);
    s.displayStudent();

    cout << endl;

    Teacher t;
    t.setTeacher("Dr. Sharma", 201, "9123456780", "Computer Science");
    t.displayTeacher();

    return 0;
}