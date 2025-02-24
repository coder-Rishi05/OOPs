/*11. Write a C++ program to create a class called "Library" with a collection of books and methods to add and remove books. */

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;

public:
    Book() {}

    Book(const string& title, const string& author, const string& ISBN)
        : title(title), author(author), ISBN(ISBN) {}

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "ISBN: " << ISBN << endl;
    }

    bool operator==(const string& title) const {
        return this->title == title;
    }
};

class Library {
private:
    static const int MAX_BOOKS = 100;
    Book books[MAX_BOOKS];
    int numBooks;

public:
    Library() : numBooks(0) {}

    void addBook(const Book& book) {
        if (numBooks < MAX_BOOKS) {
            books[numBooks++] = book;
            cout << "Book added to the library." << endl;
        } else {
            cout << "Cannot add more books. Library is full." << endl;
        }
    }

    void removeBook(const string& title) {
        int index = -1;
        for (int i = 0; i < numBooks; ++i) {
            if (books[i] == title) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < numBooks - 1; ++i) {
                books[i] = books[i + 1];
            }
            numBooks--;
            cout << "Book removed from the library." << endl;
        } else {
            cout << "Book not found in the library." << endl;
        }
    }

    void displayBooks() const {
        if (numBooks == 0) {
            cout << "Library is empty." << endl;
        } else {
            cout << "Books in the library:" << endl;
            for (int i = 0; i < numBooks; ++i) {
                books[i].display();
                cout << endl;
            }
        }
    }
};

int main() {
    Library library;

    Book book1("C++", "E-BalaGurasami", "+91 1234567891");
    Book book2("Let us C", "Yashwant kanetkar", "+91 1987654321");

    library.addBook(book1);
    library.addBook(book2);

    library.displayBooks();

    library.removeBook("C");

    library.displayBooks();

    return 0;
}

/* Output: 

Book added to the library.
Book added to the library.
Books in the library:
Title: C++
Author: E-BalaGurasami
ISBN: +91 1234567891

Title: Let us C
Author: Yashwant kanetkar
ISBN: +91 1987654321

Book not found in the library.
Books in the library:
Title: C++
Author: E-BalaGurasami
ISBN: +91 1234567891

Title: Let us C
Author: Yashwant kanetkar
ISBN: +91 1987654321

*/