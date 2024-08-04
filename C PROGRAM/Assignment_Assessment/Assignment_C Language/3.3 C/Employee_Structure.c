#include <stdio.h>

// Define a structure for an employee
struct Employee {
    int empno;           // Employee number
    char empname[50];    // Employee name
    char address[100];   // Employee address
    int age;             // Employee age
};

int main() {
    // Declare an array of structures to store information for five employees
    struct Employee employees[5];
int i;
    // Input information for each employee
    for ( i = 0; i < 5; i++) {
        printf("Enter details for Employee %d:\n", i + 1);
        printf("Employee Number: ");
        scanf("%d", &employees[i].empno);
        printf("Employee Name: ");
        scanf("%s", employees[i].empname);  // Assuming employee names do not contain spaces
        printf("Address: ");
        scanf("%s", employees[i].address);  // Assuming addresses do not contain spaces
        printf("Age: ");
        scanf("%d", &employees[i].age);
    }

    // Display information for each employee
    printf("\nEmployee Information:\n");
    for (i = 0; i < 5; i++) {
        printf("Employee %d:\n", i + 1);
        printf("Employee Number: %d\n", employees[i].empno);
        printf("Employee Name: %s\n", employees[i].empname);
        printf("Address: %s\n", employees[i].address);
        printf("Age: %d\n", employees[i].age);
        printf("\n");
    }

    return 0;
}

