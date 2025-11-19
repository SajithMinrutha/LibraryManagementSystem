#ifndef MEMBER_H
#define MEMBER_H

#include "Book.h"
#include <string>

class Member
{
private:
    std::string name;
    int age;
    int dateOfBirth;

public:
    // getters
    std::string getName();
    int getAge();
    int getDateOfBirth();
    // setters
    void setName(std::string &name);
    void setAge(int &age);
    void setDateOfBirth(int &dateOfBirth);
};

#endif