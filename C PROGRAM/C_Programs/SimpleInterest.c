#include <stdio.h>

int main ()
{
float amount, rate, time,si;

printf("Enter the amount \n");
scanf("%f",&amount);

printf("Enter the rate \n");
scanf("%f",&rate);

printf("Enter the time \n");
scanf("%f",&time);

si = amount * rate * time / 100;

printf("Simple Interest : %f \n", si);

    return 0;
}
