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
    int phone;
public:
    explicit User(const string& = "N/A", const int& = 0, const string& = "N/A", const int& = 0);
    void setName(const string&);
    void setAge(const int&);
    void setGender(const string&);
    void setPhone(const int&);
    virtual void DisplayInfo() const;
};


#endif //OLMS_USER_H
