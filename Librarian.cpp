//
// Created by Adham Hamdy on 9/1/2024.
//

#include "Librarian.h"

void Librarian::setLibrary(Library *lib) {
    library = lib;
}

void Librarian::borrowUserWithTitle(LibraryUser &user, const string &title) {
    auto& books = library->books;
    auto it = find_if(books.begin(), books.end(), [&title] (const Book &b){
        return title == b.getTitle();
    });
    if (it != books.end()){
        user.borrowedBooks.insert(*it);
        library->borrowedBooks.insert(*it);
        library->remove(*it);
    } else{
        cout << "This book is not found in our library" << endl;
    }
}

void Librarian::borrowUserWithID(LibraryUser &user, const int &id) {
    auto& books = library->books;
    auto it = find_if(books.begin(), books.end(), [&id] (const Book &b){
        return id == b.getBookID();
    });
    if (it != books.end()){
        user.borrowedBooks.insert(*it);
        library->borrowedBooks.insert(*it);
        library->remove(*it);
    } else{
        cout << "This book is not found in our library" << endl;
    }
}

void Librarian::returnBookWithTitle(LibraryUser &user, const string &title) {
    const auto& books = library->booksArchive;
    auto it = find_if(books.begin(), books.end(), [&title] (const Book &b){
        return title == b.getTitle();
    });
    if (it != books.end()){
        library->add(*it);
        user.borrowedBooks.erase(*it);
        library->borrowedBooks.erase(*it);
    } else{
        cout << "Library archive does not have this book with this title." << endl;
    }
}

void Librarian::returnBookWithID(LibraryUser &user, const int &id) {
    const auto& books = library->booksArchive;
    auto it = find_if(books.begin(), books.end(), [&id] (const Book &b){
        return id == b.getBookID();
    });
    if (it != books.end()){
        library->add(*it);
        user.borrowedBooks.erase(*it);
        library->borrowedBooks.erase(*it);
    } else{
        cout << "Library archive does not have this book with this ID." << endl;
    }
}

Librarian::Librarian(const string &n, const int &ag, const string &g, const string &phn, Library *lib) : User(n, ag, g, phn), library(lib) {

}

void Librarian::DisplayInfo() const {
    User::DisplayInfo();
}

