#include <iostream>
#include <vector>

class BankAccount {
private:
    std::string accountNumber;
    double balance;

public:
    BankAccount(std::string accNumber, double initialBalance)
        : accountNumber(accNumber), balance(initialBalance) {}

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            std::cout << "Insufficient funds." << std::endl;
        }
    }

    void displayBalance() {
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Balance: " << balance << std::endl;
    }
};

int main() {
    BankAccount account("12345", 1000.0);
    account.displayBalance();

    account.deposit(500.0);
    account.displayBalance();

    account.withdraw(200.0);
    account.displayBalance();

    return 0;
}
