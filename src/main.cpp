#include <iostream>
#include "Menu.h"
#include "Inventory.h"

int main()
{
    Inventory mainInventory;
    Menu main_menu(Inventory mainInventory);
    return 0;
}