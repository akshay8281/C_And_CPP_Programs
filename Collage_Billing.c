#include <stdio.h>

// Function to calculate the total bill
float calculateTotalBill(float tuition, float books, float accommodation) {
    return tuition + books + accommodation;
}

int main() {
    // Constants for tuition, books, and accommodation fees
    const float TUITION_FEE = 5000.0;
    const float BOOKS_FEE = 1000.0;
    const float ACCOMMODATION_FEE = 2000.0;

    // Variables to store user input
    float tuitionPaid, booksPaid, accommodationPaid;

    // Get user input for fees paid
    printf("Enter amount paid for tuition: $");
    scanf("%f", &tuitionPaid);

    printf("Enter amount paid for books: $");
    scanf("%f", &booksPaid);

    printf("Enter amount paid for accommodation: $");
    scanf("%f", &accommodationPaid);

    // Calculate the remaining balance
    float remainingBalance = calculateTotalBill(TUITION_FEE, BOOKS_FEE, ACCOMMODATION_FEE) - (tuitionPaid + booksPaid + accommodationPaid);

    // Display the remaining balance
    printf("\nRemaining Balance: $%.2f\n", remainingBalance);

    return 0;
}
