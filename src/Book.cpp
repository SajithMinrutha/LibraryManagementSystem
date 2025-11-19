#include "Book.h"
#include <string>

using std::string;

// getters
string Book::getTitle() const { return title; }
string Book::getAuthor() const { return author; }
string Book::getISBN() const { return ISBN; }
int Book::getQuantity() const { return quantity; }
double Book::getPrice() const { return price; }
string Book::getGenre() const { return genre; }
string Book::getPublisher() const { return publisher; }
int Book::getYear() const { return year; }
// setters
void Book::setTitle(const string &t) { title = t; }
void Book::setAuthor(const string &a) { author = a; }
void Book::setISBN(const string &I) { ISBN = I; }
void Book::setQuantity(const int &q) { quantity = q; }
void Book::setPrice(const double &p) { price = p; }
void Book::setGenre(const string &g) { genre = g; }
void Book::setPublisher(const string &pub) { publisher = pub; }
void Book::setYear(const int &y) { year = y; }
