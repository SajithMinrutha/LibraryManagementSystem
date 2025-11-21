#include "Validation.h"
#include <string>
#include <iostream>
using std::cout;
using std::string;

int Validation::invaidInputCheck(string &t, string &a, string &I, int &q, double &p, string &g, string &pub, int &y)
{
    if (t == "" || a == "" || I == "" || g == "" || pub == "")
    {
        cout << "error";
        return 1;
    }
    else if (q < 0 || p < 0.0 || y < 0)
    {
        cout << "error";
        return 1;
    }
    else
    {
        cout << "Valid";
        return 0;
    }
}
