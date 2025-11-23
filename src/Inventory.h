#ifndef INVENTORY_H
#define INVENTORY_H
#include <map>
#include <string>
#include "Book.h"
class Inventory
{
private:
    int nextID = 1;
    std::map<int, Book> shelf;

public:
    void addBook(const std::string &title, const std::string &author, const std::string &ISBN, const int &quantity, const double &price, const std::string &genre, const std::string &publisher, const int &year);
    void removeBook();
    void printBookTableHeader() const noexcept;
    void viewAllBooks() const;
};
#endif