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
    string username;
    string password;
    int confirmationNumber;
    string getUsername() const;
    string getPassword() const;
    int getConfirmationNumber() const;
    set<Book> borrowedBooks;
public:
    explicit LibraryUser(const string& = "N/A", const string& = "N/A", const string& = "N/A", const int& = 0, const string& = "N/A",
                const string& = "N/A");
    void setUsername(const string&);
    void setPassword(const string&);
    void setConfirmationNumber(const int&);
    void displayBorrowedBooks() const;
    void DisplayInfo() const override;
    friend class Librarian;
};


#endif //OLMS_LIBRARYUSER_H
