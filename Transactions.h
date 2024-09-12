//
// Created by power on 9/3/2024.
//

#ifndef OLMS_TRANSACTIONS_H
#define OLMS_TRANSACTIONS_H

#include "LibraryUser.h"
#include <map>
#include <memory>
#include <utility>
using namespace std;

class Transactions {
private:
    map<string, LibraryUser> activeAccounts;
    map<string, int> emails;
public:
    LibraryUser& createAccount(const LibraryUser&);
    bool isFound(const string&, const string&);
    LibraryUser* Login(const string&, const string&);
    string getUsername(const string&, const string&, const int&);
    string getPassword(const string&, const string&, const int&);
    void changeUsername(const string&, const string&, const string&, const string&, const int&);
    void changePassword(const string&, const string&, const string&, const string&, const int&);
    void deleteAccount(const string&, const string&, const string&, const int&);
    int activeAccountsNumber() const;
};


#endif //OLMS_TRANSACTIONS_H
