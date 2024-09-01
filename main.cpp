#include "Library.h"
#include "Librarian.h"
#include "LibraryUser.h"
#include "Book.h"
#include "User.h"
int main() {
    Library L;
    Librarian adham(L,"adham", 20, "male", 214);
    LibraryUser hazem;
    adham.borrowUserWithTitle(hazem, "1984");
    hazem.displayBorrowedBooks();
    return 0;
}
