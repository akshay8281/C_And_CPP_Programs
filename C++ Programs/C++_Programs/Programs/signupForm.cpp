#include <iostream>
#include <string>

using namespace std;

struct User {
    string name;
    string email;
    string password;
};

void displayWelcomeMessage() {
    cout << "Welcome to the Signup Form!" << endl;
    cout << "----------------------------" << endl;
}

User getUserInput() {
    User newUser;

    cout << "Enter your name: ";
    getline(cin, newUser.name);

    cout << "Enter your email: ";
    getline(cin, newUser.email);

    cout << "Enter your password: ";
    getline(cin, newUser.password);

    return newUser;
}

int main() {
    displayWelcomeMessage();

    User newUser = getUserInput();

    // Display the entered information
    cout << "\nThank you for signing up!\n";
    cout << "Name: " << newUser.name << endl;
    cout << "Email: " << newUser.email << endl;

    // For security reasons, we don't display the password in the console
    cout << "Password: ********" << endl;

    return 0;
}
