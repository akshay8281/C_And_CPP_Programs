#include <stdio.h>

// Function to calculate total sales
float calculateTotalSales(float sales[], int size) {
    float totalSales = 0.0;
    for (int i = 0; i < size; i++) {
        totalSales += sales[i];
    }
    return totalSales;
}

// Function to calculate average sales
float calculateAverageSales(float sales[], int size) {
    float totalSales = calculateTotalSales(sales, size);
    return totalSales / size;
}

// Function to find the highest sales
float findHighestSales(float sales[], int size) {
    float highestSales = sales[0];
    for (int i = 1; i < size; i++) {
        if (sales[i] > highestSales) {
            highestSales = sales[i];
        }
    }
    return highestSales;
}

// Function to display the sales report
void displaySalesReport(float sales[], int size) {
    printf("\nSales Report:\n");
    printf("--------------\n");
    for (int i = 0; i < size; i++) {
        printf("Month %d: $%.2f\n", i + 1, sales[i]);
    }

    float totalSales = calculateTotalSales(sales, size);
    float averageSales = calculateAverageSales(sales, size);
    float highestSales = findHighestSales(sales, size);

    printf("\nTotal Sales: $%.2f\n", totalSales);
    printf("Average Sales: $%.2f\n", averageSales);
    printf("Highest Sales: $%.2f\n", highestSales);
}

int main() {
    // Assuming 12 months of sales data
    int numberOfMonths = 12;
    float sales[12];

    // Get sales data from the user
    printf("Enter sales for each month:\n");
    for (int i = 0; i < numberOfMonths; i++) {
        printf("Month %d: ", i + 1);
        scanf("%f", &sales[i]);
    }

    // Display the sales report
    displaySalesReport(sales, numberOfMonths);

    return 0;
}
