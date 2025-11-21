#ifndef VALIDATION_H
#define VALIDATION_H
#include <string>
class Validation
{
public:
    static int invalidChoiceCheck();
    static int invaidInputCheck(std::string &title, std::string &author, std::string &ISBN, int &quantity, double &price, std::string &genre, std::string &publisher, int &year);
};
#endif