#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

// Item structure to represent a menu item
struct MenuItem {
    string name;
    double price;
};

// Function to display the menu
void displayMenu(const vector<MenuItem>& menu) {
    cout << "=== McDonald's Menu ===" << endl;
    cout << setw(20) << left << "Item" << setw(10) << right << "Price" << endl;
    cout << setfill('-') << setw(30) << "-" << setfill(' ') << endl;
    for (const auto& item : menu) {
        cout << setw(20) << left << item.name << setw(10) << right << item.price << endl;
    }
    cout << endl;
}

// Function to take an order
void takeOrder(const vector<MenuItem>& menu, vector<MenuItem>& order) {
    int choice;
    do {
        cout << "Enter the item number to add to your order (0 to finish): ";
        cin >> choice;

        if (choice >= 1 && choice <= menu.size()) {
            order.push_back(menu[choice - 1]);
            cout << menu[choice - 1].name << " added to your order." << endl;
        } else if (choice != 0) {
            cout << "Invalid choice. Please enter a valid item number." << endl;
        }
    } while (choice != 0);
}

// Function to display the order
void displayOrder(const vector<MenuItem>& order) {
    cout << "=== Your Order ===" << endl;
    if (order.empty()) {
        cout << "Your order is empty." << endl;
    } else {
        double total = 0.0;
        cout << setw(20) << left << "Item" << setw(10) << right << "Price" << endl;
        cout << setfill('-') << setw(30) << "-" << setfill(' ') << endl;
        for (const auto& item : order) {
            cout << setw(20) << left << item.name << setw(10) << right << item.price << endl;
            total += item.price;
        }
        cout << setfill('-') << setw(30) << "-" << setfill(' ') << endl;
        cout << setw(20) << left << "Total" << setw(10) << right << total << endl;
    }
    cout << endl;
}

int main() {
    // Define the menu items
    vector<MenuItem> menu = {
        {"Big Mac", 5.99},
        {"McChicken", 4.99},
        {"Fries", 2.49},
        {"Coca-Cola", 1.99}
        // Add more items as needed
    };

    // Display the menu
    displayMenu(menu);
    

    // Take the order
    vector<MenuItem> order;
    takeOrder(menu, order);

    // Display the order
    displayOrder(order);

    return 0;
}
