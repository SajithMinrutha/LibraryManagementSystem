#ifndef MENU_H
#define MENU_H
#include <Inventory.h>

class Menu
{
private:
    Inventory &currentInventory;

public:
    Menu(Inventory &mainInventory);

    void runMenu();
};
#endif