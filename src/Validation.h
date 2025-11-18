#ifndef VALIDATION_H
#define VALIDATION_H
#include <string>
using std::string;
class Validation
{
public:
    static int invalidChoiceCheck();
    static int invaidInputCheck(string &title, string &author, string &ISBN, int &quantity, double &price, string &genre, string &publisher, int &year);
};
#endif