#include <iostream>
#include <string>

using namespace std;

// Class to represent patient information
class Patient {
public:
    string name;
    int age;
    float weight;
    float height;

    // Function to input patient data
    void inputPatientData() {
        cout << "Enter patient name: ";
        getline(cin, name);

        cout << "Enter patient age: ";
        cin >> age;

        cout << "Enter patient weight (kg): ";
        cin >> weight;

        cout << "Enter patient height (m): ";
        cin >> height;

        // Clear the input buffer
        cin.ignore();
    }

    // Function to calculate BMI (Body Mass Index)
    float calculateBMI() {
        return weight / (height * height);
    }

    // Function to display the medical report
    void displayMedicalReport() {
        cout << "\nMedical Report:\n";
        cout << "-----------------\n";
        cout << "Patient Name: " << name << endl;
        cout << "Age: " << age << " years\n";
        cout << "Weight: " << weight << " kg\n";
        cout << "Height: " << height << " m\n";

        float bmi = calculateBMI();
        cout << "BMI (Body Mass Index): " << bmi << endl;

        // Provide a basic interpretation of BMI
        if (bmi < 18.5) {
            cout << "Status: Underweight\n";
        } else if (bmi >= 18.5 && bmi < 25) {
            cout << "Status: Normal weight\n";
        } else if (bmi >= 25 && bmi < 30) {
            cout << "Status: Overweight\n";
        } else {
            cout << "Status: Obesity\n";
        }
    }
};

int main() {
    // Create a Patient object
    Patient patient;

    // Input patient data
    patient.inputPatientData();

    // Display the medical report
    patient.displayMedicalReport();

    return 0;
}
