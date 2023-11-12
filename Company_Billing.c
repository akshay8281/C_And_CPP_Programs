#include <stdio.h>

// Define a structure to represent a product
struct Product {
    char name[50];
    float price;
    int quantity;
};

// Function to calculate the total cost of a product
float calculateProductTotal(struct Product product) {
    return product.price * product.quantity;
}

// Function to calculate the total bill
float calculateTotalBill(struct Product products[], int numProducts) {
    float totalBill = 0;
    for (int i = 0; i < numProducts; i++) {
        totalBill += calculateProductTotal(products[i]);
    }
    return totalBill;
}

int main() {
    // Constants for tax rate
    const float TAX_RATE = 0.1; // 10%

    // Array to store product details
    struct Product products[3];

    // Get product details from the user
    for (int i = 0; i < 3; i++) {
        printf("Enter product %d details:\n", i + 1);
        printf("Name: ");
        scanf("%s", products[i].name);
        printf("Price: $");
        scanf("%f", &products[i].price);
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
    }

    // Calculate the total bill before tax
    float totalBeforeTax = calculateTotalBill(products, 3);

    // Calculate the tax amount
    float taxAmount = totalBeforeTax * TAX_RATE;

    // Calculate the total bill including tax
    float totalBill = totalBeforeTax + taxAmount;

    // Display the invoice
    printf("\nInvoice:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s: $%.2f x %d = $%.2f\n", products[i].name, products[i].price, products[i].quantity, calculateProductTotal(products[i]));
    }

    printf("\nTotal before tax: $%.2f\n", totalBeforeTax);
    printf("Tax (%.0f%%): $%.2f\n", TAX_RATE * 100, taxAmount);
    printf("Total bill: $%.2f\n", totalBill);

    return 0;
}
