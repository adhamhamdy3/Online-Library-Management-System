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
    return 0;
}

