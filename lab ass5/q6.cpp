#include <iostream>
using namespace std;

class Book
{
protected:
    string title;
    string author;
    float price;

public:
    void setBook(string t, string a, float p)
    {
        title = t;
        author = a;
        price = p;
    }

    void displayBook()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

class Textbook : public Book
{
private:
    string subject;

public:
    void setTextbook(string t, string a, float p, string s)
    {
        setBook(t, a, p);
        subject = s;
    }

    void displayTextbook()
    {
        displayBook();
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    Textbook tb;
    tb.setTextbook("Data Structures", "Mark Allen Weiss", 599.0, "Computer Science");
    tb.displayTextbook();
    return 0;
}