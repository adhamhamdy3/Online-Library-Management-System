#include "Library.h"
#include "Librarian.h"
#include "LibraryUser.h"
#include "Book.h"
#include "User.h"
int main() {
    Library L;
    Librarian adham("adham", 20, "male", "214", &L);
    LibraryUser hazem;
    adham.borrowUserWithTitle(hazem, "1984");
    hazem.displayBorrowedBooks();
    cout << endl << "----------" << endl;
    adham.returnBookWithID(hazem, 2);
    hazem.displayBorrowedBooks();
    return 0;
}
