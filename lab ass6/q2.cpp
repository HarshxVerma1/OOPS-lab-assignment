#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;

    Book() {
        this->title = "";
        this->author = "";
        this->ISBN = "";
    }

    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    Book(const Book &b) {
        this->title = b.title;
        this->author = b.author;
        this->ISBN = b.ISBN;
    }

    void display() {
        cout << "Title: " << this->title << endl;
        cout << "Author: " << this->author << endl;
        cout << "ISBN: " << this->ISBN << endl;
        cout << endl;
    }
};

class Library {
private:
    Book books[100];
    int count = 0;

public:
    void addBook(Book b) {
        books[count] = b;
        count++;
    }

    bool removeBooks(string &ISBN) {
        for (int i = 0; i < count; i++) {
            if (books[i].ISBN == ISBN) {
                for (int j = i; j < count - 1; j++) {
                    books[j] = books[j + 1];
                }
                count--;
                return true;
            }
        }
        return false;
    }

    void displayDetails() {
        for (int i = 0; i < count; i++) {
            books[i].display();
        }
    }
};

int main() {

    Book b1("DSA", "Author1", "101");
    Book b2("OOPS", "Author2", "102");
    Book b3("DBMS", "Author3", "103");

    Book b4 = b3;

    Book arr1[2] = {
        Book("OS", "Author4", "104"),
        Book("CN", "Author5", "105")
    };

    int n = 2;
    Book *arr2 = new Book[n];
    arr2[0] = Book("AI", "Author6", "106");
    arr2[1] = Book("ML", "Author7", "107");

    Library lib;

    lib.addBook(b1);
    lib.addBook(b2);
    lib.addBook(b3);
    lib.addBook(b4);

    for (int i = 0; i < 2; i++) {
        lib.addBook(arr1[i]);
    }

    for (int i = 0; i < n; i++) {
        lib.addBook(arr2[i]);
    }

    cout << "Books after adding:\n";
    lib.displayDetails();

    string removeID = "103";
    lib.removeBooks(removeID);

    cout << "Books after removal:\n";
    lib.displayDetails();

    delete[] arr2;

    return 0;
}