//
// Created by power on 9/3/2024.
//

#include "Transactions.h"

map<string, LibraryUser> Transactions::activeAccounts;
map<string, int> Transactions::emails;

LibraryUser &Transactions::createAccount(const LibraryUser &user) {
    activeAccounts.insert({user.email, user});
    emails[user.email]++;
    return const_cast<LibraryUser &>(activeAccounts.rbegin()->second);
}

LibraryUser *Transactions::Login(const string &user, const string &pass) {
    for (auto &entity : activeAccounts) {
        if (entity.second.username == user && entity.second.password == pass){
//            cout << "welcome" << endl;
            return &entity.second;
        }
    }
    return nullptr;
}

string Transactions::getUsername(const string &pass, const string &mail, const int &conf) {
    //TODO check in the main func is this mail found in emails map or not
    if (activeAccounts[mail].password == pass && activeAccounts[mail].confirmationNumber == conf){
        return activeAccounts[mail].username;
    } else{
        cout << "Error: User not found!" << endl;
        return "";
    }
}

string Transactions::getPassword(const string &user, const string &mail, const int &conf) {
    //TODO check in the main func is this mail found in emails map or not
    if (activeAccounts[mail].password == user && activeAccounts[mail].confirmationNumber == conf){
        return activeAccounts[mail].password;
    } else{
        cout << "Error: User not found!" << endl;
        return "";
    }
}


void Transactions::changeUsername(const string &old_username, const string &mail, const string &pass, const string &new_username, const int &conf) {
    //TODO check in the main func is this mail found in emails map or not
    if (activeAccounts[mail].username == old_username && activeAccounts[mail].password == pass && activeAccounts[mail].confirmationNumber == conf){
        activeAccounts[mail].username = new_username;
    } else{
        cout << "Error: User not found!" << endl;
    }
}

void Transactions::changePassword(const string &user, const string &mail, const string &old_pass, const string &new_pass, const int &conf) {
    //TODO check in the main func is this mail found in emails map or not
    if (activeAccounts[mail].username == user && activeAccounts[mail].password == old_pass && activeAccounts[mail].confirmationNumber == conf){
        activeAccounts[mail].username = new_pass;
    } else{
        cout << "Error: User not found!" << endl;
    }
}

void Transactions::deleteAccount(const string &user, const string &mail, const string &pass, const int &conf) {
    //TODO check in the main func is this mail found in emails map or not
    if (activeAccounts[mail].username == user && activeAccounts[mail].password == pass && activeAccounts[mail].confirmationNumber == conf){
        activeAccounts.erase(mail);
        emails.erase(mail);
    } else{
        cout << "Error: User not found!";
    }
}

int Transactions::activeAccountsNumber() {
    return static_cast<int>(activeAccounts.size());
}

bool Transactions::isFound(const string &usernm, const string &pass) {
    for (const auto& entity : activeAccounts) {
        if (entity.second.username == usernm && entity.second.password == pass)
            return true;
    }
    return false;
}
