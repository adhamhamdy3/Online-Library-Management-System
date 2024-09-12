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
    static map<string, LibraryUser> activeAccounts;
public:
    static map<string, int> emails;
    static LibraryUser& createAccount(const LibraryUser&);
    static bool isFound(const string&, const string&);
    static LibraryUser* Login(const string&, const string&);
    static string getUsername(const string&, const string&, const int&);
    static string getPassword(const string&, const string&, const int&);
    static void changeUsername(const string&, const string&, const string&, const string&, const int&);
    static void changePassword(const string&, const string&, const string&, const string&, const int&);
    static void deleteAccount(const string&, const string&, const string&, const int&);
    static int activeAccountsNumber() ;
};


#endif //OLMS_TRANSACTIONS_H
