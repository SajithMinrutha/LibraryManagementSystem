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
    std::string getName() const noexcept;
    int getAge() const noexcept;
    int getDateOfBirth() const noexcept;

    // setters
    void setName(std::string &name) noexcept;
    void setAge(int &age) noexcept;
    void setDateOfBirth(int &dateOfBirth) noexcept;
};

#endif