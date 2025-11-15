#ifndef INVENTORY_H
#define INVENTORY_H
#include <map>
#include "Book.h"
class Inventory
{
public:
    std::map<int, Book> shelf;
};
#endif