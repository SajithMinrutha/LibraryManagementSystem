#ifndef INVENTORY_H
#define INVENTORY_H
#include <map>
#include <string>
#include "Member.h"
#include "Book.h"
class Inventory
{
private:
    int nextID = 1;
    std::map<int, Book> shelf;
    std::map<int, Member> member;

public:
    // getters
    void getMemberTableHeader() const noexcept;
    void getAllMembers() const noexcept;
    void getBookTableHeader() const noexcept;
    void getAllBooks() const noexcept;

    // setters
    void setMember(const std::string &member, const int &age, const int dateOfBirth) noexcept;
    void removeMember() noexcept;
    void setBook(const std::string &title, const std::string &author, const std::string &ISBN, const int &quantity, const double &price, const std::string &genre, const std::string &publisher, const int &year) noexcept;
    void removeBook() noexcept;
};
#endif