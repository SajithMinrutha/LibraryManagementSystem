#include <iostream>
#include "Menu.h"
#include "Inventory.h"

int main()
{
    Inventory mainInventory;
    Menu mainMenu(mainInventory);
    mainMenu.runMenu();
    return 0;
}