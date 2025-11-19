#include <iostream>
#include "Menu.h"
#include "Inventory.h"

int main()
{
    Inventory mainInventory;
    Menu main_menu(mainInventory);
    main_menu.runMenu();
    return 0;
}