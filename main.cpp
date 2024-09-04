#include "Library.h"
#include "Librarian.h"
#include "LibraryUser.h"
#include "Book.h"
#include "User.h"
#include <vector>
#include "Transactions.h"
int main() {
    Library L;
    Librarian adham("adham", 20, "male", "214", &L);
<<<<<<< HEAD

    LibraryUser form;
    form.setUsername("adham");
    form.setPassword("1234");
    form.setName("Adham Hamdy");
    form.setAge(20);
    form.setGender("Male");
    form.setPhone("011");
    form.setConfirmationNumber(1234);

    Transactions t;

    // Create the account first
    t.createAccount(form);

    // Now, attempt to login
    LibraryUser* modify = t.Login("adham", "1234");

    if (modify) {
        modify->setName("chelsea");
        modify->DisplayInfo();
    } else {
        cout << "Login failed!" << endl;
    }
    cout << endl << endl;
    cout << t.getPassword(1234);
//    t.deleteAccount("adham", "1234", 1234);
    t.Login("adham", "1234");
=======
    LibraryUser hazem;
    adham.borrowUserWithTitle(hazem, "1984");
    hazem.displayBorrowedBooks();
    cout << endl << "----------" << endl;
    adham.returnBookWithID(hazem, 2);
    hazem.displayBorrowedBooks();
>>>>>>> 9147720f8220a0b2dcad949462571ac0e1b9eb62
    return 0;
}

