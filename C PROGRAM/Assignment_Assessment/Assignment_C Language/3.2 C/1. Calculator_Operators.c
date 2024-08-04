//Q-2 : Write a program to make Simple calculator (to make addition, subtraction,
//multiplication, division and modulo)

#include <stdio.h>

int main() {
 
 int N1,N2,Sum,Substraction,Multiply,Division;
 float Modulo;
 printf("Enter the Value of N1 :\n");
 scanf("%d",&N1);
 
printf("Enter the Value of N2 :\n");
 scanf("%d",&N2);
 
 Sum = N1 + N2;
 
 printf("%d + %d = %d\n", N1, N2, Sum);
 
  Substraction = N1 - N2;
 
 printf("%d - %d = %d\n", N1, N2, Substraction);
 
  Multiply = N1 * N2;
 
 printf("%d * %d = %d\n", N1, N2, Multiply);
 
  Division = N1 / N2;
 
 printf("%d / %d = %d\n", N1, N2, Division);
 
   Modulo = N1 % N2;
 
 printf("THe Modulo value is  %f\n",Modulo);
 
    return 0;
}