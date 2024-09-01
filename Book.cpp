//
// Created by Adham Hamdy on 8/10/2024.
//

#include "Book.h"

Book::Book(const string &t, const string &athr, const int& id ,const int &pgs, const int &yr) : title(t), author(athr), bookID(id), pages(pgs), year(yr){

}

void Book::setTitle(const string &t) {
    title = t;
}

void Book::setAuthor(const string &athr) {
    author = athr;
}

void Book::setBookID(const int &id) {
    bookID = id;
}

void Book::setPages(const int &pgs) {
    pages = pgs;
}

void Book::setYear(const int &yr) {
    year = yr;
}

string Book::getTitle() const{
    return title;
}

string Book::getAuthor() const{
    return author;
}

int Book::getBookID() const{
    return bookID;
}

int Book::getPages() const{
    return pages;
}

int Book::getYear() const{
    return year;
}

bool Book::operator==(const Book &b) const {
    return title == b.title && author == b.author && bookID == b.bookID && pages == b.pages && year == b.year;
}

bool Book::operator>(const Book &b) const {
    return pages > b.pages;
}

bool Book::operator<(const Book &b) const {
    return pages < b.pages;
}

bool Book::operator!=(const Book &b) const {
    return title != b.title || author != b.author || bookID != b.bookID || pages != b.pages || year != b.year;
}

void Book::bookInfo() const {
    cout << "Book Info." << endl;
    cout << "Title: " << title << endl << "Author: " << author << endl << "Book ID: " << bookID << endl
         << "Number of Pages: " << pages << endl << "Year of Publish: " << year << endl;
}

