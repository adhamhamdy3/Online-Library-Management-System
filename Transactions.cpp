//
// Created by power on 9/3/2024.
//

#include "Transactions.h"

LibraryUser &Transactions::createAccount(const LibraryUser &user) {
    activeAccounts.insert({user.confirmationNumber, user});
    return const_cast<LibraryUser &>(activeAccounts.rbegin()->second);
}

LibraryUser *Transactions::Login(const string &username, const string &password) {
    for (auto &entity : activeAccounts) {
        if (entity.second.getUsername() == username && entity.second.getPassword() == password){
            cout << "welcome" << endl;
            return &entity.second;
        }
    }
    cout << "User not found" << endl;
        return nullptr;
}

string Transactions::getUsername(const int &conf) {
    auto it = activeAccounts.find(conf);
    if (it != activeAccounts.end()) {
        return it->second.getUsername();
    } else {
        cout << "Error: User not found!";
        return "";
    }

}

string Transactions::getPassword(const int &conf) {
    auto it = activeAccounts.find(conf);
    if (it != activeAccounts.end()) {  // The key exists
        return it->second.getPassword();
    } else {
        cout << "Error: User not found!";
        return "";
    }

}

void Transactions::changeUsername(const string &old_username, const string &password, const string &new_username, const int &conf) {

}

void Transactions::changePassword(const string &username, const string &old_password, const string &new_password, const int &conf) {

}

//void Transactions::deleteAccount(const string &username, const string &password, const int &conf) {
//    if (activeAccounts[conf].getUsername() == username && activeAccounts[conf].getPassword() == password){
//        activeAccounts.erase(conf);
//    } else{
//        cout << "Error: User not found!";
//    }
//}





