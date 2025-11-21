#include "Book.h"
#include <string>

using std::string;

// getters
string Book::getTitle() const noexcept { return title; }
string Book::getAuthor() const noexcept { return author; }
string Book::getISBN() const noexcept { return ISBN; }
int Book::getQuantity() const noexcept { return quantity; }
double Book::getPrice() const noexcept { return price; }
string Book::getGenre() const noexcept { return genre; }
string Book::getPublisher() const noexcept { return publisher; }
int Book::getYear() const noexcept { return year; }

// setters
void Book::setTitle(const string &t) noexcept { title = t; }
void Book::setAuthor(const string &a) noexcept { author = a; }
void Book::setISBN(const string &I) noexcept { ISBN = I; }
void Book::setQuantity(const int &q) noexcept { quantity = q; }
void Book::setPrice(const double &p) noexcept { price = p; }
void Book::setGenre(const string &g) noexcept { genre = g; }
void Book::setPublisher(const string &pub) noexcept { publisher = pub; }
void Book::setYear(const int &y) noexcept { year = y; }
