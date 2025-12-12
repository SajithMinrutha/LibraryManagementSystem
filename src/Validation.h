#ifndef VALIDATION_H
#define VALIDATION_H
#include <string>

class Validation
{
public:
    static int invalidChoiceCheck() noexcept; // yet to implement
    static int invalidInputCheck(std::string &title, std::string &author, std::string &ISBN, int &quantity, double &price, std::string &genre, std::string &publisher, int &year) noexcept;
};
#endif