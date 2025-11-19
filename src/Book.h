#ifndef BOOK_H
#define BOOK_H
#include <string>

class Book
{
private:
    std::string title;
    std::string author;
    std::string ISBN;
    int quantity;
    double price;
    std::string genre;
    std::string publisher;
    int year;

public:
    // getters
    std::string getTitle() const;
    std::string getAuthor() const;
    std::string getISBN() const;
    int getQuantity() const;
    double getPrice() const;
    std::string getGenre() const;
    std::string getPublisher() const;
    int getYear() const;

    // setters
    void setTitle(const std::string &title);
    void setAuthor(const std::string &author);
    void setISBN(const std::string &ISBN);
    void setQuantity(const int &quantity);
    void setPrice(const double &price);
    void setGenre(const std::string &genre);
    void setPublisher(const std::string &publisher);
    void setYear(const int &year);
};
#endif