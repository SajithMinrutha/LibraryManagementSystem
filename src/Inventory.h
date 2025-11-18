#ifndef INVENTORY_H
#define INVENTORY_H
#include <map>
#include "Book.h"
class Inventory
{
private:
    std::map<int, Book> shelf;

public:
    void addBook(string &title, string &author, string &ISBN, int &quantity, double &price, string &genre, string &publisher, int &year) const;
    void removeBook() const;
    void viewAllBooks() const;
};
#endif