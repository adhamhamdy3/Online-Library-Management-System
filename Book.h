//
// Created by Adham Hamdy on 8/10/2024.
//

#ifndef LIBRARY_MANAGEMENT_SYSTEM_BOOK_H
#define LIBRARY_MANAGEMENT_SYSTEM_BOOK_H
#include <iostream>
using namespace std;

class Book {
protected:
    string title;
    string author;
    int bookID;
    int pages;
    int year;
public:
    explicit Book(const string& = "N/A", const string& = "N/A", const int& = 0, const int& = 0, const int& = 0);
    void setTitle(const string&);
    void setAuthor(const string&);
    void setBookID(const int&);
    void setPages(const int&);
    void setYear(const int&);
    [[nodiscard]] string getTitle() const;
    [[nodiscard]] string getAuthor() const;
    [[nodiscard]] int getBookID() const;
    [[nodiscard]] int getPages() const;
    [[nodiscard]] int getYear() const;
    void bookInfo() const;
    bool operator== (const Book&) const;
    bool operator> (const Book&) const;
    bool operator< (const Book&) const;
    bool operator!= (const Book&) const;
};


#endif //LIBRARY_MANAGEMENT_SYSTEM_BOOK_H
