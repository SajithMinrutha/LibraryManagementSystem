#include "Inventory.h"
#include "Book.h"
#include <string.h>
#include <iostream>
using std::cout;
using std::string;

// members
void Inventory::setMember(const std::string &member, const int &age, const int dateOfBirth) noexcept
{
}

void Inventory::removeMember() noexcept {}

void Inventory::getAllMembers() const noexcept
{
    for (const auto &[id, member] : members)
    {
        cout << member;
    }
}

// books
void Inventory::setBook(const string &t, const string &a, const string &I, const int &q, const double &p, const string &g, const string &pub, const int &y) noexcept
{
    // book object
    Book book;

    // properties
    book.setTitle(t);
    book.setAuthor(a);
    book.setISBN(I);
    book.setQuantity(q);
    book.setPrice(p);
    book.setGenre(g);
    book.setPublisher(pub);
    book.setYear(y);

    shelf[nextID] = book;
    nextID++;
}

void Inventory::removeBook() noexcept
{
}

void Inventory::getAllBooks() const noexcept
{

    for (const auto &[id, book] : shelf)
    {
        cout << book;
    }
}

// table headers
void Inventory::getMemberTableHeader() const noexcept
{
    std::cout << "Name\tAge\tDate of Birth\t";
}
void Inventory::getBookTableHeader() const noexcept
{
    std::cout << "Title\tAuthor\tISBN\tQuantity\tPrice\tGenre\tPublisher\tYear\n";
}
