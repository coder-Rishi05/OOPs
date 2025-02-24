/*5. Write a C++ program to create a class called "Book" with attributes for title, author, and ISBN, and methods to add and remove books from a collection. */

#include <iostream>
#include <string>

using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;

public:
    // Constructor
    Book(string t, string a, string i) : title(t), author(a), ISBN(i) {}

    // Getter methods
    string getTitle() const { return title; }
    string getAuthor() const { return author; }
    string getISBN() const { return ISBN; }
};

class BookCollection {
private:
    static const int MAX_BOOKS = 100; 
    Book* books[MAX_BOOKS]; 
    int numBooks;

public:
 
    BookCollection() : numBooks(0) {}

    void addBook(const Book& book) {
        if (numBooks < MAX_BOOKS) {
            books[numBooks] = new Book(book.getTitle(), book.getAuthor(), book.getISBN());
            cout << "Book added: " << book.getTitle() << endl;
            numBooks++;
        } else {
            cout << "Cannot add more books. Collection is full." << endl;
        }
    }

    void removeBook(const string& title) {
        for (int i = 0; i < numBooks; ++i) {
            if (books[i]->getTitle() == title) {
                cout << "Book removed: " << books[i]->getTitle() << endl;
                delete books[i]; 
                
                for (int j = i; j < numBooks - 1; ++j) {
                    books[j] = books[j + 1];
                }
                numBooks--;
                return;
            }
        }
        cout << "Book not found: " << title << endl;
    }

    void displayBooks() {
        cout << "Books in the collection:" << endl;
        for (int i = 0; i < numBooks; ++i) {
            cout << "Title: " << books[i]->getTitle() << ", Author: " << books[i]->getAuthor() << ", ISBN: " << books[i]->getISBN() << endl;
        }
    }

    ~BookCollection() {
        for (int i = 0; i < numBooks; ++i) {
            delete books[i];
        }
    }
};

int main() {
    BookCollection collection;

    Book book1("Title 1", "Author 1", "ISBN1");
    Book book2("Title 2", "Author 2", "ISBN2");
    Book book3("Title 3", "Author 3", "ISBN3");
    collection.addBook(book1);
    collection.addBook(book2);
    collection.addBook(book3);

    collection.displayBooks();

    collection.removeBook("Title 2");

    collection.displayBooks();

    return 0;
}

/* Output :
Book added: Title 1
Book added: Title 2
Book added: Title 3
Books in the collection:
Title: Title 1, Author: Author 1, ISBN: ISBN1
Title: Title 2, Author: Author 2, ISBN: ISBN2
Title: Title 3, Author: Author 3, ISBN: ISBN3
Book removed: Title 2
Books in the collection:
Title: Title 1, Author: Author 1, ISBN: ISBN1
Title: Title 3, Author: Author 3, ISBN: ISBN3

*/