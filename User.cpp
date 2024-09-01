//
// Created by Adham Hamdy on 9/1/2024.
//

#include "User.h"

void User::setName(const string &nm) {
    name = nm;
}

void User::setAge(const int &ag) {
    age = ag;
}

void User::setGender(const string &gndr) {
    gender = gndr;
}

void User::setPhone(const int &phn) {
    phone = phn;
}

void User::DisplayInfo() const {
    cout << "Personal Info." << endl;
    cout << "Name: " << name << endl << "Age: " << age << endl << "Gender: " << gender << endl << "Phone: " << phone << endl;
}

User::User(const string &n, const int &ag, const string &g, const int &phn) : name(n), age(ag), gender(g), phone(phn){

}
