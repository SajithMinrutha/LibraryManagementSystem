#include "gtest/gtest.h"
#include "Book.h"

TEST(BookTest, SettersAndGetters)
{
    Book book;

    std::string title = "Tin Tin";
    book.setTitle(title);

    std::string author = "martin";
    book.setAuthor(author);

    std::string ISBN = "21212212";
    book.setISBN(ISBN);

    int quantity = 1;
    book.setQuantity(quantity);

    double price = 10;
    book.setPrice(price);

    std::string genre = "action";
    book.setGenre(genre);

    std::string publisher = "bookpublisher";
    book.setPublisher(publisher);

    int year = 2011;
    book.setYear(year);

    EXPECT_EQ(book.getTitle(), "Tin Tin");
    EXPECT_EQ(book.getAuthor(), "martin");
    EXPECT_EQ(book.getISBN(), "21212212");
    EXPECT_EQ(book.getQuantity(), 1);
    EXPECT_EQ(book.getPrice(), 10);
    EXPECT_EQ(book.getGenre(), "action");
    EXPECT_EQ(book.getPublisher(), "bookpublisher");
    EXPECT_EQ(book.getYear(), 2011);
}