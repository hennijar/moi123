#include <iostream>
#include <string>
using namespace std;

class Book  {
    private:
    string title;
    int pages;

    public:
    // Constructor
    Book(string t = "untitled", int p = 0) : title(t), pages(p) {
        cout << "Constructor \"" << title << "\" with " << pages << " pages\n";
    }

    // Destructor
    ~Book() {
    cout << "Destructor: \"" << title << "\" destroyed \n";
    }

    void display() const {
        cout << "Title: " << title << ", Pages: " << pages << endl;
    }
};

class BookShelf {
    private:
    Book* books; //Pointer to book array
    int size;

    public:
    //Constructor: dynamically create array and initialize it
    BookShelf() {
        size = 3;
        books = new Book[size]{
            Book("C++ Fundamentals", 300),
            Book("Data Structures", 450),
            Book("Algorithms", 500)
        };
        cout << "BookShelf Constructor: Shelf initialized with " << size << " books\n";
    }
    // Destructor: Clean up heap memory
    ~BookShelf() {
       delete[] books;
        cout << "BookShelf Destructor: Shelf destroyed\n";
    }

    void displayBooks() const {
        cout << "\nBooks on shelf:\n";
        for (int i = 0; i < size; i++) {
            books[i].display();
        }
    }
};

int main() {
    BookShelf* shelf = new BookShelf(); // Created on heap
    shelf->displayBooks();

    delete shelf; // Cleanup
    cout << "\n--- End of Program ---\n";
    return 0;
}


