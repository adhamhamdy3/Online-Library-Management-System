//
// Created by Adham Hamdy on 9/1/2024.
//

#include "LibraryUser.h"

void LibraryUser::displayBorrowedBooks() const {
    cout << "Your current borrowed books: " << endl;
    cout << "No. Borrowed Books: " << (int) borrowedBooks.size() << endl;
    for (const auto& book : borrowedBooks) {
        book.bookInfo();
    }

}
