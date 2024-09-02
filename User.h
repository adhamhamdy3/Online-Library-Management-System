//
// Created by Adham Hamdy on 9/1/2024.
//

#ifndef OLMS_USER_H
#define OLMS_USER_H
#include <string>
#include <iostream>

using namespace std;

class User {
private:
    string name;
    int age;
    string gender;
    string phone;
public:
    explicit User(const string& = "N/A", const int& = 0, const string& = "N/A", const string& = "N/A");
    void setName(const string&);
    void setAge(const int&);
    void setGender(const string&);
    void setPhone(const string &);
    string getName() const;
    int getAge() const;
    string getGender() const;
    string getPhoneNumber() const;
    virtual void DisplayInfo() const;
};


#endif //OLMS_USER_H
