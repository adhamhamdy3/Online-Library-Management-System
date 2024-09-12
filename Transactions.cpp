//
// Created by power on 9/3/2024.
//

#include "Transactions.h"

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
}

string Transactions::getUsername(const string &pass, const string &mail, const int &conf) {
    auto it = activeAccounts.find(mail);
    if (it != activeAccounts.end()){
        if (it->second.password == pass && it->second.confirmationNumber == conf){
            return it->second.getUsername();
        } else{
            cout << "Error: User not found!";
            return "";
        }
    } else{
        cout << "Error: User not found!";
        return "";
    }
}


string Transactions::getPassword(const string &user, const string &mail, const int &conf) {
    auto it = activeAccounts.find(mail);
    if (it != activeAccounts.end()){
        if (it->second.username == user && it->second.confirmationNumber == conf){
            return it->second.getPassword();
        } else{
            cout << "Error: User not found!";
            return "";
        }
    } else{
        cout << "Error: User not found!";
        return "";
    }
}


void Transactions::changeUsername(const string &old_username, const string &mail, const string &pass, const string &new_username, const int &conf) {
    auto it = activeAccounts.find(mail);
    if (it != activeAccounts.end()){
        if (it->second.username == old_username && it->second.password == pass && it->second.confirmationNumber == conf){
            it->second.username = new_username;
        } else {
            cout << "Error: User not found!";
        }
    } else{
        cout << "Error: User not found!";
    }
}


void Transactions::changePassword(const string &user, const string &mail, const string &old_pass, const string &new_pass, const int &conf) {
    auto it = activeAccounts.find(mail);
    if (it != activeAccounts.end()){
        if (it->second.username == user && it->second.password == old_pass && it->second.confirmationNumber == conf){
            it->second.username = new_pass;
        } else {
            cout << "Error: User not found!";
        }
    } else{
        cout << "Error: User not found!";
    }
}

void Transactions::deleteAccount(const string &user, const string &mail, const string &pass, const int &conf) {
    auto it = activeAccounts.find(mail);
    if (it != activeAccounts.end()){
        if (it->second.username == user && it->second.password == pass && it->second.confirmationNumber == conf){
            activeAccounts.erase(it->first);
        } else {
            cout << "Error: User not found!";
        }
    } else{
        cout << "Error: User not found!";
    }
}

int Transactions::activeAccountsNumber() const {
    return static_cast<int>(activeAccounts.size());
}

bool Transactions::isFound(const string &usernm, const string &pass) {
    for (const auto& entity : activeAccounts) {
        if (entity.second.username == usernm && entity.second.password == pass)
            return true;
    }
    return false;
}
