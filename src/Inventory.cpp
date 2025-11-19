#include "Inventory.h"
#include "Book.h"
#include "string.h"
using std::string;

void Inventory::addBook(const string &t, const string &a, const string &I, const int &q, const double &p, const string &g, const string &pub, const int &y)
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
}
void Inventory::removeBook()
{
}
void Inventory::viewAllBooks() const
{
}