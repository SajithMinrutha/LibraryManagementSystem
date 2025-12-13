#include "Member.h"
#include <string>
using std::string;

// getters
string Member::getName() const noexcept { return name; }
int Member::getAge() const noexcept { return age; }
int Member::getDateOfBirth() const noexcept { return dateOfBirth; }
void Member::getBorrowedBooks() const noexcept
{
    for (const auto &[id, borrowedBook] : borrowedBooks)
    {
        std::cout << id << "/n" << std::endl;
        std::cout << borrowedBook;
    }
}

// setters
void Member::setName(const string &n) noexcept { name = n; }
void Member::setAge(const int &a) noexcept { age = a; }
void Member::setDateOfBirth(const int &dob) noexcept { dateOfBirth = dob; }

// overloader
std::ostream &operator<<(std::ostream &os, const Member &m) noexcept
{
    os << m.name << "\t"
       << m.age << "\t"
       << m.dateOfBirth << "\t"
       << "\n";
    return os;
}