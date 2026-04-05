#include <iostream>
using namespace std;

class Person
{
protected:
    string name;
    string address;

public:
    void setPerson(string n, string a)
    {
        name = n;
        address = a;
    }

    void displayPerson()
    {
        cout << "Name: " << name << endl;
        cout << "Address: " << address << endl;
    }
};

class Staff : virtual public Person
{
protected:
    int employee_id;
    string department;

public:
    void setStaff(string n, string a, int id, string dept)
    {
        setPerson(n, a);
        employee_id = id;
        department = dept;
    }

    void displayStaff()
    {
        displayPerson();
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
    }
};

class Student : virtual public Person
{
protected:
    int student_id;
    string grade;

public:
    void setStudent(string n, string a, int id, string g)
    {
        setPerson(n, a);
        student_id = id;
        grade = g;
    }

    void displayStudent()
    {
        displayPerson();
        cout << "Student ID: " << student_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

class TeachingAssistant : public Staff, public Student
{
public:
    void setTA(string n, string a, int eid, string dept, int sid, string g)
    {
        setPerson(n, a);
        employee_id = eid;
        department = dept;
        student_id = sid;
        grade = g;
    }

    void displayTA()
    {
        displayPerson();
        cout << "Employee ID: " << employee_id << endl;
        cout << "Department: " << department << endl;
        cout << "Student ID: " << student_id << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main()
{
    TeachingAssistant ta;
    ta.setTA("Harsh", "Patiala", 101, "CSE", 202, "A");
    ta.displayTA();
    return 0;
}