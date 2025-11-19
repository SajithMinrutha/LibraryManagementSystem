#ifndef BOOK_H
#define BOOK_H
#include <string>
using std::string;
class Book
{
private:
    string title;
    string author;
    string ISBN;
    int quantity;
    double price;
    string genre;
    string publisher;
    int year;

public:
    // getters
    string getTitle() const;
    string getAuthor() const;
    string getISBN() const;
    int getQuantity() const;
    double getPrice() const;
    string getGenre() const;
    string getPublisher() const;
    int getYear() const;

    // setters
    void setTitle(string &title);
    void setAuthor(string &author);
    void setISBN(string &ISBN);
    void setQuantity(int &quantity);
    void setPrice(double &price);
    void setGenre(string &genre);
    void setPublisher(string &publisher);
    void setYear(int &year);
};
#endif