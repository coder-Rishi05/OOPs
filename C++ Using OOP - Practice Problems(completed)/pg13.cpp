/*13. Write a C++ program to create a class called "Inventory" with a collection of products and methods to add and remove products, and to check for low inventory.*/

#include <iostream>
#include <cstring>

using namespace std;

const int maxITEMS = 10;

class Inventory {
private:
    char items[maxITEMS][50];
    int itemCount;

public:
    Inventory() : itemCount(0) {}

    void addItem(const char* itemName) {
        if (itemCount < maxITEMS) {
            strcpy(items[itemCount++], itemName);
            cout << "Item added to inventory." << endl;
        } else {
            cout << "Inventory is full. Cannot add more items." << endl;
        }
    }

    void removeItem(const char* itemName) {
        int index = -1;
        for (int i = 0; i < itemCount; ++i) {
            if (strcmp(items[i], itemName) == 0) {
                index = i;
                break;
            }
        }

        if (index != -1) {
            for (int i = index; i < itemCount - 1; ++i) {
                strcpy(items[i], items[i + 1]);
            }
            itemCount--;
            cout << "Item removed from inventory." << endl;
        } else {
            cout << "Item not found in inventory." << endl;
        }
    }

    void displayInventory() const {
        if (itemCount == 0) {
            cout << "Inventory is empty." << endl;
        } else {
            cout << "Items in inventory:" << endl;
            for (int i = 0; i < itemCount; ++i) {
                cout << items[i] << endl;
            }
        }
    }
};

int main() {
    Inventory inventory;

    inventory.addItem("Item1");
    inventory.addItem("Item2");
    inventory.addItem("Item3");
    inventory.addItem("Item4");
    inventory.addItem("Item5");
    inventory.addItem("Item6");
    inventory.addItem("Item7");

    inventory.displayInventory();

    inventory.removeItem("Item5");

    inventory.displayInventory();

    return 0;
}

/* Output : 

Item added to inventory.
Item added to inventory.
Item added to inventory.
Item added to inventory.
Item added to inventory.
Item added to inventory.
Item added to inventory.
Items in inventory:
Item1
Item2
Item3
Item4
Item5
Item6
Item7
Item removed from inventory.
Items in inventory:
Item1
Item2
Item3
Item4
Item6
Item7

*/