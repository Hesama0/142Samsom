#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    string ISBN;

    Book(string t, string a, string i) : title(t), author(a), ISBN(i) {}

    void displayBookInfo() {
        cout << "Title: " << title << ", Author: " << author << ", ISBN: " << ISBN << endl;
    }
};

class Librarian {
public:
    string name;
    int employeeID;

    Librarian(string n, int id) : name(n), employeeID(id) {}

    void issueBook(Book& book) {
        cout << "Librarian " << name << " is issuing the book: " << book.title << endl;
    }
};

class Library {
public:
    Book* books[2];
    Librarian librarian;

    Library(Book* b[2], Librarian l) : librarian(l) {
        books[0] = b[0];
        books[1] = b[1];
    }

    void showLibraryInfo() {
        cout << "Library contains:" << endl;
        for (int i = 0; i < 2; i++) {
            books[i]->displayBookInfo();
        }
        cout << "Librarian: " << librarian.name << ", Employee ID: " << librarian.employeeID << endl;
    }
};

int main() {
    Book book1("Gaihab", "Osama Almuslim", "123456789");
    Book book2("Fear", "Osama Almuslim", "987654321");

    Book* books[2] = { &book1, &book2 };

    Librarian librarian("Alice", 1001);

    Library library(books, librarian);

    library.showLibraryInfo();

    librarian.issueBook(book1);

    return 0;
}
