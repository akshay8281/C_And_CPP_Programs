// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("Enter an operator (+, -, *, /): \n");
    scanf("%c", &operation);
    

printf("\nEnter First operands: \n");
    scanf("%lf",&n1);

printf("Enter Second operands: \n");
    scanf("%lf",&n2);




    switch(operation)
    {
        case '+':
            printf("\n%.1lf + %.1lf = %.1lf\n",n1, n2, n1+n2);
            break;

        case '-':
            printf("\n%.1lf - %.1lf = %.1lf\n",n1, n2, n1-n2);
            break;

        case '*':
            printf("\n%.1lf * %.1lf = %.1lf\n",n1, n2, n1*n2);
            break;

        case '/':
            printf("\n%.1lf / %.1lf = %.1lf\n",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("\nError! operator is not correct\n");
    }

    return 0;
}
