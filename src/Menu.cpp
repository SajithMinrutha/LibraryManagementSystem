#include "Menu.h"
#include "Inventory.h"
#include "Validation.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

Menu::Menu(Inventory &mainInventory) : currentInventory(mainInventory)
{
}
void Menu::runMenu()
{

    while (true)
    {

        string answer;
        cout << "\n----Welcome----\n";
        cout << "1.Add A Book\n";
        cout << "2.Remove A Book\n";
        cout << "3.View All Books\n";
        cout << "Enter (1-3 or type exit): " << endl;
        cin >> answer;

        if (answer == "1")
        {
            string title;
            string author;
            string ISBN;
            int quantity;
            double price;
            string genre;
            string publisher;
            int year;

            cout << "\n 1.Enter The Title Of The Book You Want To Add: " << endl;
            cin >> title;
            cout << "\n 1.Who Is The Author Of The Book: " << endl;
            cin >> author;
            cout << "\n 1.What Is The ISBN: " << endl;
            cin >> ISBN;
            cout << "\n 1.What Is The Quantity: " << endl;
            cin >> quantity;
            cout << "\n 1.What Is The Price: " << endl;
            cin >> price;
            cout << "\n 1.What Is The Genre: " << endl;
            cin >> genre;
            cout << "\n 1.Who Is The Publisher: " << endl;
            cin >> publisher;
            cout << "\n 1.What Is The Realsed Year: " << endl;
            cin >> year;

            if (Validation::invaidInputCheck(title, author, ISBN, quantity, price, genre, publisher, year))
            {
                cout << "Invalid Input";
            }
            else
            {
                currentInventory.addBook(title, author, ISBN, quantity, price, genre, publisher, year);
            }
        }
        else if (answer == "2")
        {
            currentInventory.removeBook();
        }
        else if (answer == "3")
        {
            currentInventory.viewAllBooks();
        }
        else if (answer == "exit")
        {
            cout << "\nGood Bye!\n";
            break;
        }
    }
}