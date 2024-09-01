//
// Created by Adham Hamdy on 8/10/2024.
//

#include "Library.h"

int Library:: availableBooks = 30;

Library::Library() {
    booksArchive = {
            Book("To Kill a Mockingbird", "Harper Lee", 1, 281, 1960),
            Book("1984", "George Orwell", 2, 328, 1949),
            Book("The Great Gatsby", "F. Scott Fitzgerald", 3, 180, 1925),
            Book("The Catcher in the Rye", "J.D. Salinger", 4, 277, 1951),
            Book("Moby-Dick", "Herman Melville", 5, 635, 1851),
            Book("Pride and Prejudice", "Jane Austen", 6, 279, 1813),
            Book("War and Peace", "Leo Tolstoy", 7, 1225, 1869),
            Book("The Lord of the Rings", "J.R.R. Tolkien", 8, 1178, 1954),
            Book("Jane Eyre", "Charlotte Brontë", 9, 500, 1847),
            Book("Crime and Punishment", "Fyodor Dostoevsky", 10, 671, 1866),
            Book("The Hobbit", "J.R.R. Tolkien", 11, 310, 1937),
            Book("Brave New World", "Aldous Huxley", 12, 311, 1932),
            Book("The Adventures of Huckleberry Finn", "Mark Twain", 13, 366, 1884),
            Book("Anna Karenina", "Leo Tolstoy", 14, 864, 1877),
            Book("The Brothers Karamazov", "Fyodor Dostoevsky", 15, 796, 1880),
            Book("Wuthering Heights", "Emily Brontë", 16, 416, 1847),
            Book("Madame Bovary", "Gustave Flaubert", 17, 329, 1857),
            Book("The Odyssey", "Homer", 18, 541, -800),
            Book("The Divine Comedy", "Dante Alighieri", 19, 798, 1320),
            Book("Don Quixote", "Miguel de Cervantes", 20, 1072, 1605),
            Book("The Iliad", "Homer", 21, 683, -762),
            Book("Ulysses", "James Joyce", 22, 730, 1922),
            Book("The Grapes of Wrath", "John Steinbeck", 23, 464, 1939),
            Book("Great Expectations", "Charles Dickens", 24, 544, 1861),
            Book("Catch-22", "Joseph Heller", 25, 453, 1961),
            Book("One Hundred Years of Solitude", "Gabriel Garcia Marquez", 26, 417, 1967),
            Book("The Sound and the Fury", "William Faulkner", 27, 326, 1929),
            Book("Heart of Darkness", "Joseph Conrad", 28, 96, 1899),
            Book("Frankenstein", "Mary Shelley", 29, 280, 1818),
            Book("Slaughterhouse-Five", "Kurt Vonnegut", 30, 275, 1969)
    };
    books = {
            Book("To Kill a Mockingbird", "Harper Lee", 1, 281, 1960),
            Book("1984", "George Orwell", 2, 328, 1949),
            Book("The Great Gatsby", "F. Scott Fitzgerald", 3, 180, 1925),
            Book("The Catcher in the Rye", "J.D. Salinger", 4, 277, 1951),
            Book("Moby-Dick", "Herman Melville", 5, 635, 1851),
            Book("Pride and Prejudice", "Jane Austen", 6, 279, 1813),
            Book("War and Peace", "Leo Tolstoy", 7, 1225, 1869),
            Book("The Lord of the Rings", "J.R.R. Tolkien", 8, 1178, 1954),
            Book("Jane Eyre", "Charlotte Brontë", 9, 500, 1847),
            Book("Crime and Punishment", "Fyodor Dostoevsky", 10, 671, 1866),
            Book("The Hobbit", "J.R.R. Tolkien", 11, 310, 1937),
            Book("Brave New World", "Aldous Huxley", 12, 311, 1932),
            Book("The Adventures of Huckleberry Finn", "Mark Twain", 13, 366, 1884),
            Book("Anna Karenina", "Leo Tolstoy", 14, 864, 1877),
            Book("The Brothers Karamazov", "Fyodor Dostoevsky", 15, 796, 1880),
            Book("Wuthering Heights", "Emily Brontë", 16, 416, 1847),
            Book("Madame Bovary", "Gustave Flaubert", 17, 329, 1857),
            Book("The Odyssey", "Homer", 18, 541, -800),
            Book("The Divine Comedy", "Dante Alighieri", 19, 798, 1320),
            Book("Don Quixote", "Miguel de Cervantes", 20, 1072, 1605),
            Book("The Iliad", "Homer", 21, 683, -762),
            Book("Ulysses", "James Joyce", 22, 730, 1922),
            Book("The Grapes of Wrath", "John Steinbeck", 23, 464, 1939),
            Book("Great Expectations", "Charles Dickens", 24, 544, 1861),
            Book("Catch-22", "Joseph Heller", 25, 453, 1961),
            Book("One Hundred Years of Solitude", "Gabriel Garcia Marquez", 26, 417, 1967),
            Book("The Sound and the Fury", "William Faulkner", 27, 326, 1929),
            Book("Heart of Darkness", "Joseph Conrad", 28, 96, 1899),
            Book("Frankenstein", "Mary Shelley", 29, 280, 1818),
            Book("Slaughterhouse-Five", "Kurt Vonnegut", 30, 275, 1969)
    };
    availableBooks = (int) books.size();
}

void Library::add(const Book &b) {
    books.insert(b);
    availableBooks++;
}

void Library::remove(const Book &b) {
    borrowedBooks.insert(b);
    books.erase(b);
    availableBooks--;
}

int Library::showAvailableBooks() {
    return availableBooks;
}

int Library::borrowed() const {
    return (int) borrowedBooks.size();
}

void Library::display() const {
    cout << "Library Contents:" << endl;
    cout << "Available Books: " << availableBooks << endl << "Borrowed Books: " << borrowed() << endl;
    for (const auto& book : books) {
        book.bookInfo();
        cout << endl;
    }
}


