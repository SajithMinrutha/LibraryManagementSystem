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
    std::string getTitle() const noexcept;
    std::string getAuthor() const noexcept;
    std::string getISBN() const noexcept;
    int getQuantity() const noexcept;
    double getPrice() const noexcept;
    std::string getGenre() const noexcept;
    std::string getPublisher() const noexcept;
    int getYear() const noexcept;

    // setters
    void setTitle(const std::string &title) noexcept;
    void setAuthor(const std::string &author) noexcept;
    void setISBN(const std::string &ISBN) noexcept;
    void setQuantity(const int &quantity) noexcept;
    void setPrice(const double &price) noexcept;
    void setGenre(const std::string &genre) noexcept;
    void setPublisher(const std::string &publisher) noexcept;
    void setYear(const int &year) noexcept;
};
#endif