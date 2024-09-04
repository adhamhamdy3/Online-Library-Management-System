//
// Created by Adham Hamdy on 9/1/2024.
//

#ifndef OLMS_LIBRARYUSER_H
#define OLMS_LIBRARYUSER_H

#include "User.h"
#include "Book.h"
#include <set>

<<<<<<< HEAD
class LibraryUser : public User {
protected:
    string username;
    string password;

    string getUsername() const;
    string getPassword() const;
    set<Book> borrowedBooks;
public:
    int confirmationNumber;
    explicit LibraryUser(const string& = "N/A", const string& = "N/A", const int& = 0, const string& = "N/A", const int& = 0, const string& = "N/A",
=======
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
>>>>>>> 9147720f8220a0b2dcad949462571ac0e1b9eb62
                const string& = "N/A");
    void setUsername(const string&);
    void setPassword(const string&);
    void setConfirmationNumber(const int&);
    void displayBorrowedBooks() const;
    void DisplayInfo() const override;
<<<<<<< HEAD
    LibraryUser& operator= (const LibraryUser&);
    bool operator<(const LibraryUser& rhs) const;
    friend class Librarian;
    friend class Transactions;
=======
    friend class Librarian;
>>>>>>> 9147720f8220a0b2dcad949462571ac0e1b9eb62
};


#endif //OLMS_LIBRARYUSER_H
