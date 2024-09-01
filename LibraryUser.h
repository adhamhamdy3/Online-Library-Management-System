//
// Created by Adham Hamdy on 9/1/2024.
//

#ifndef OLMS_LIBRARYUSER_H
#define OLMS_LIBRARYUSER_H

#include "User.h"
#include "Book.h"
#include <set>

class LibraryUser : User {
private:
    set<Book> borrowedBooks;
public:
    void displayBorrowedBooks() const;
    friend class Librarian;

};


#endif //OLMS_LIBRARYUSER_H
