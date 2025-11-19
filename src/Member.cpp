#include "Member.h"
#include <string>
using std::string;

// getters
string Member::getName() { return name; }
int Member::getAge() { return age; }
int Member::getDateOfBirth() { return dateOfBirth; }
// setters
void Member::setName(string &n) { name = n; }
void Member::setAge(int &a) { age = a; }
void Member::setDateOfBirth(int &dob) { dateOfBirth = dob; }