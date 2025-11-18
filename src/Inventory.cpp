#include "Inventory.h"
#include "Book.h"
#include "string.h"
using std::string;

void Inventory::addBook(string &t, string &a, string &I, int &q, double &p, string &g, string &pub, int &y) const
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
void Inventory::removeBook() const
{
}
void Inventory::viewAllBooks() const
{
}