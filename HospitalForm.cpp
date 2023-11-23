#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Patient structure to represent a patient's information
struct Patient {
    string name;
    int age;
    char gender;
    string medicalCondition;
};

// Function to display the hospital form
void displayForm(const Patient& patient) {
    cout << "=== Hospital Form ===" << endl;
    cout << "Name: " << patient.name << endl;
    cout << "Age: " << patient.age << endl;
    cout << "Gender: " << patient.gender << endl;
    cout << "Medical Condition: " << patient.medicalCondition << endl;
    cout << endl;
}

int main() {
    // Create a vector to store patient records
    vector<Patient> patientRecords;

    // Get information from the user
    Patient patient;

    cout << "Enter Patient Information:" << endl;
    cout << "Name: ";
    getline(cin, patient.name);

    cout << "Age: ";
    cin >> patient.age;

    cout << "Gender (M/F): ";
    cin >> patient.gender;

    cout << "Medical Condition: ";
    cin.ignore();  // Clear the newline character from the buffer
    getline(cin, patient.medicalCondition);

    // Display the entered information
    displayForm(patient);

    // Store the patient record in the vector
    patientRecords.push_back(patient);

    // You can add more functionality, such as displaying all patient records, searching for a patient, etc.

    return 0;
}
