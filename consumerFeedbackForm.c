#include <stdio.h>

int main() {
    // Variables to store user input
    char name[100];
    int age;
    char feedback[500];

    // Welcome message
    printf("Welcome to the Consumer Feedback Form\n");

    // Getting user input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Clear the input buffer
    while (getchar() != '\n');

    printf("Enter your feedback (max 500 characters):\n");
    fgets(feedback, sizeof(feedback), stdin);

    // Displaying submitted information
    printf("\nThank you for your feedback, %s!\n", name);
    printf("Age: %d\n", age);
    printf("Feedback: %s\n", feedback);

    return 0;
}
