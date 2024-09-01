//
// Created by Adham Hamdy on 8/10/2024.
//

#ifndef LIBRARY_MANAGEMENT_SYSTEM_LIBRARY_H
#define LIBRARY_MANAGEMENT_SYSTEM_LIBRARY_H
#include "Book.h"
#include <set>
using namespace std;

class Library {
protected:
    set<Book> booksArchive;
    set<Book> books;
    set<Book> borrowedBooks;
    static int availableBooks;
    void add(const Book&);
    void remove(const Book&);
public:
    Library();
    static int showAvailableBooks();
    [[nodiscard]] int borrowed() const;
    void display() const;
    friend class Librarian;
};


#endif //LIBRARY_MANAGEMENT_SYSTEM_LIBRARY_H
