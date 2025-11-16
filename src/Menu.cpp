#include "Menu.h"
#include "Inventory.h"
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

Menu::Menu(Inventory &main_inventory)
{
    while (true)
    {

        string answer;
        cout << "\n----Welcome----\n";
        cout << "1.Add A Book\n";
        cout << "2.Remove A Book\n";
        cout << "3.View All Books\n";
        cout << "3.View All Books\n";
        cout << "Enter (1-3 or type exit): " << endl;
        cin >> answer;

        if (answer == "1")
        {
        }
        else if (answer == "2")
        {
        }
        else if (answer == "3")
        {
        }
        else if (answer == "exit")
        {
            cout << "\nGood Bye!\n";
            break;
        }
    }
}