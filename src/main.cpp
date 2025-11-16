#include <iostream>
#include "Menu.h"
#include "Inventory.h"

int main()
{
    Inventory main_inventory;
    Menu main_menu(const auto &main_inventory);
    return 0;
}