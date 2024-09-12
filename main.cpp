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
    form.setEmail("adhamhn333@gmail.com");


    // Create the account first
    Transactions::createAccount(form);
    // Now, attempt to login
    LibraryUser* modify = nullptr;
    if (Transactions::isFound("adham", "12345")){
        cout << "Welcome" << endl;
        modify = Transactions::Login("adham", "1234");
    }
    if (modify){
        modify->setName("chelsea");
        modify->DisplayInfo();
        cout << "\n\n\n\n";
    }



    cout << endl << "================================================" << endl;
    cout << "get username function: " << Transactions::getUsername("1234", "adhamhn333@gmail.com", 1234) << endl;
    Transactions::changeUsername("adham", "adhamhn333@gmail.com", "1234", "adhoosom", 1234);
    cout << "get username function after changing: " << Transactions::getUsername("1234", "adhamhn333@gmail.com", 1234) << endl;
    cout << "no of active account = " << Transactions::activeAccountsNumber() << endl;
    Transactions::deleteAccount("adhoosom", "adhamhn333@gmail.com", "1234", 1234);
    cout << "no of active account after deleting = " << Transactions::activeAccountsNumber() << endl;
    cout << Transactions::getUsername("adhamhn333@gmail.com", "1234", 1234);

    return 0;
}

