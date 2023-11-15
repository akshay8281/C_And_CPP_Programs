#include <iostream>
#include <vector>
#include <ctime>

struct FIR {
    int id;
    std::string complainantName;
    std::string accusedName;
    std::string description;
    time_t timestamp;
};

std::vector<FIR> firDatabase;

void registerFIR() {
    FIR newFIR;
    std::cout << "Enter Complainant's Name: ";
    std::cin >> newFIR.complainantName;

    std::cout << "Enter Accused's Name: ";
    std::cin >> newFIR.accusedName;

    std::cout << "Enter Description of the Incident: ";
    std::cin.ignore(); // Ignore the newline character in the buffer
    std::getline(std::cin, newFIR.description);

    newFIR.timestamp = time(0);
    newFIR.id = firDatabase.size() + 1;

    firDatabase.push_back(newFIR);

    std::cout << "FIR registered successfully with ID: " << newFIR.id << std::endl;
}

void displayFIR(int id) {
    for (const auto& fir : firDatabase) {
        if (fir.id == id) {
            std::cout << "FIR ID: " << fir.id << std::endl;
            std::cout << "Complainant: " << fir.complainantName << std::endl;
            std::cout << "Accused: " << fir.accusedName << std::endl;
            std::cout << "Description: " << fir.description << std::endl;
            std::cout << "Timestamp: " << ctime(&fir.timestamp); // Convert timestamp to a readable format
            return;
        }
    }

    std::cout << "FIR with ID " << id << " not found." << std::endl;
}

int main() {
    int choice;
    do {
        std::cout << "1. Register FIR\n";
        std::cout << "2. Display FIR details\n";
        std::cout << "3. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                registerFIR();
                break;
            case 2:
                int id;
                std::cout << "Enter FIR ID: ";
                std::cin >> id;
                displayFIR(id);
                break;
            case 3:
                std::cout << "Exiting program.\n";
                break;
            default:
                std::cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 3);

    return 0;
}
