/*18. Write a C++ program to create a class called "Restaurant" with attributes for menu items, prices, and ratings, and methods to add and remove items, and to calculate average rating.*/

#include <iostream>
#include <string>

using namespace std;

class Restaurant {
private:
    static const int MAX_MENU_ITEMS = 10;
    string menu[MAX_MENU_ITEMS]; 
    double prices[MAX_MENU_ITEMS]; 
    int ratings[MAX_MENU_ITEMS];
    int totalRatings;
    int totalMenuItems;

public:
    Restaurant() : totalRatings(0), totalMenuItems(0) {}

    void addItem(const string& itemName, double price) {
        if (totalMenuItems < MAX_MENU_ITEMS) {
            menu[totalMenuItems] = itemName;
            prices[totalMenuItems] = price;
            totalMenuItems++;
        } else {
            cout << "Maximum number of menu items reached. Cannot add more items." << endl;
        }
    }

    void removeItem(const string& itemName) {
        int index = findItemIndex(itemName);
        if (index != -1) {
            for (int i = index; i < totalMenuItems - 1; ++i) {
                menu[i] = menu[i + 1];
                prices[i] = prices[i + 1];
            }
            totalMenuItems--;
        } else {
            cout << "Item not found in the menu." << endl;
        }
    }

    void rateItem(const string& itemName, int rating) {
        int index = findItemIndex(itemName);
        if (index != -1) {
            ratings[index] += rating;
            totalRatings += rating;
        } else {
            cout << "Item not found in the menu." << endl;
        }
    }

    double calculateAverageRating() const {
        if (totalMenuItems == 0) {
            return 0;
        }
        return static_cast<double>(totalRatings) / totalMenuItems;
    }

    void displayMenu() const {
        cout << "Menu:\n";
        for (int i = 0; i < totalMenuItems; ++i) {
            cout << menu[i] << " - Ruppes" << prices[i] << endl;
        }
    }

private:
    // Method to find the index of a menu item
    int findItemIndex(const string& itemName) const {
        for (int i = 0; i < totalMenuItems; ++i) {
            if (menu[i] == itemName) {
                return i;
            }
        }
        return -1;
    }
};

int main() {
    Restaurant restaurant;

    restaurant.addItem("Pizza", 99.99);
    restaurant.addItem("Burger", 60.99);
    restaurant.addItem("Pasta", 120.99);

    restaurant.rateItem("Pizza", 4);
    restaurant.rateItem("Burger", 5);
    restaurant.rateItem("Pasta", 4);

    restaurant.displayMenu();

    cout << "Average rating: " << restaurant.calculateAverageRating() << endl;

    return 0;
}

/* OUtput: 

Menu:
Pizza - Ruppes99.99
Burger - Ruppes60.99
Pasta - Ruppes120.99
Average rating: 4.33333


*/