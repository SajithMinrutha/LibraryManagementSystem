#include "Member.h"
#include <string>
using std::string;

// getters
string Member::getName() const noexcept { return name; }
int Member::getAge() const noexcept { return age; }
int Member::getDateOfBirth() const noexcept { return dateOfBirth; }

// setters
void Member::setName(string &n) noexcept { name = n; }
void Member::setAge(int &a) noexcept { age = a; }
void Member::setDateOfBirth(int &dob) noexcept { dateOfBirth = dob; }