#include "Book.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;
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
void Book::setTitle(string &t) { title = t; }
void Book::setAuthor(string &a) { author = a; }
void Book::setISBN(string &I) { ISBN = I; }
void Book::setQuantity(int &q) { quantity = q; }
void Book::setPrice(double &p) { price = p; }
void Book::setGenre(string &g) { genre = g; }
void Book::setPublisher(string &p) { publisher = p; }
void Book::setYear(int &y) { year = y; }
