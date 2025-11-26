#ifndef MEMBER_H
#define MEMBER_H

#include "Book.h"
#include <iostream>
#include <string>

class Member
{
private:
    std::string name;
    int age;
    int dateOfBirth;

public:
    // getters
    std::string getName() const noexcept;
    int getAge() const noexcept;
    int getDateOfBirth() const noexcept;

    // setters
    void setName(const std::string &name) noexcept;
    void setAge(const int &age) noexcept;
    void setDateOfBirth(const int &dateOfBirth) noexcept;

    // overloader
    friend std::ostream &operator<<(std::ostream &os, const Member &member) noexcept;
};

#endif