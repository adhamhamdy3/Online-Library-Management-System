//
// Created by Adham Hamdy on 9/1/2024.
//

#ifndef OLMS_LIBRARIAN_H
#define OLMS_LIBRARIAN_H

#include "User.h"
#include "Library.h"
#include "LibraryUser.h"
#include <algorithm>

class Librarian : User {
private:
    Library* library;
public:
    explicit Librarian(const string& = "N/A", const int& = 0, const string& = "N/A", const string& = "N/A", Library* = nullptr);
    void setLibrary(Library*);
    void borrowUserWithTitle(LibraryUser&, const string&);
    void borrowUserWithID(LibraryUser&, const int&);
    void returnBookWithTitle(LibraryUser&, const string&);
    void returnBookWithID(LibraryUser&, const int&);
    void DisplayInfo() const override;
};


#endif //OLMS_LIBRARIAN_H
