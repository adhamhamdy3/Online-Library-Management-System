//
// Created by Adham Hamdy on 9/1/2024.
//

#include "LibraryUser.h"

void LibraryUser::displayBorrowedBooks() const {
    cout << "Your current borrowed books: " << endl;
    cout << "No. Borrowed Books: " << static_cast<int> (borrowedBooks.size()) << endl;
    for (const auto& book : borrowedBooks) {
        book.bookInfo();
    }

}

LibraryUser::LibraryUser(const string &usernm, const string &pass, const int &conf, const string &n, const int &ag, const string &g, const string &phn)
: username(usernm), password(pass), confirmationNumber(conf),User(n, ag, g, phn) {
}

void LibraryUser::setUsername(const string &usernm) {
    username = usernm;
}

void LibraryUser::setPassword(const string &pass) {
    password = pass;
}

void LibraryUser::setConfirmationNumber(const int &confirm_num) {
    confirmationNumber = confirm_num;
}

string LibraryUser::getUsername() const {
    return username;
}

string LibraryUser::getPassword() const {
    return password;
}

//int LibraryUser::getConfirmationNumber() const {
//    return confirmationNumber;
//}

void LibraryUser::DisplayInfo() const {
    User::DisplayInfo();
}

LibraryUser &LibraryUser::operator=(const LibraryUser &user) {
    this->username = user.username;
    this->password = user.password;
    this->name = user.name;
    this->age = user.age;
    this->gender = user.gender;
    this->phone = user.phone;
    return *this;
}

bool LibraryUser::operator<(const LibraryUser &rhs) const {
    return this->confirmationNumber < rhs.confirmationNumber;
}
