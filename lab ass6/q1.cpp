#include <iostream>
#include <string>
using namespace std;

class Book
{
public:
    string title;
    string author;
    string ISBN;
};

class Library
{
private:
    Book books[100];
    int count;

public:
    Library()
    {
        count = 0;
    }

    // a.add new book
    bool addNewBook(string &title, string &author, string &ISBN)
    {
        if (count >= 100)
        {
            return false;
        }
        books[count].title = title;
        books[count].author = author;
        books[count].ISBN = ISBN;
        count++;
        return true;
    }

    // b. Remove book
    bool removeBooks(string &ISBN);

    // c. Display books
    void displayDetails()
    {
        if (count == 0)
        {
            cout << "No books available\n";
            return;
        }
        for (int i = 0; i < count; i++)
        {
            cout << "Book " << i + 1 << endl;
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "ISBN: " << books[i].ISBN << endl;
            cout << "----\n";
        }
    }
};

// b. Define outside using scope resolution
bool Library::removeBooks(string &ISBN)
{
    for (int i = 0; i < count; i++)
    {
        if (books[i].ISBN == ISBN)
        {
            for (int j = i; j < count - 1; j++)
            {
                books[j] = books[j + 1];
            }
            count--;
            return true;
        }
    }
    return false;
}

int main()
{
    Library lib;

    string t1 = "C Basics";
    string a1 = "Bjarne";
    string i1 = "101";
    lib.addNewBook(t1, a1, i1);

    string t2 = "OOPs";
    string a2 = "James";
    string i2 = "102";
    lib.addNewBook(t2, a2, i2);
    cout << "Library Books:\n";
    lib.displayDetails();
    cout << "\nRemoving book with ISBN 101\n";
    lib.removeBooks(i1);
    cout << "\nUpdated Library:\n";
    lib.displayDetails();

    return 0;
}