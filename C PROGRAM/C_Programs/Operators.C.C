#include <stdio.h>

int main() {
 
 int N1,N2,Sum,Substraction,Multiply,Division;
 printf("ENter the Value of N1 :\n");
 scanf("%d",&N1);
 
printf("ENter the Value of N2 :\n");
 scanf("%d",&N2);
 
 Sum = N1 + N2;
 
 printf("%d + %d = %d\n", N1, N2, Sum);
 
  Substraction = N1 - N2;
 
 printf("%d - %d = %d\n", N1, N2, Substraction);
 
  Multiply = N1 * N2;
 
 printf("%d * %d = %d\n", N1, N2, Multiply);
 
  Division = N1 / N2;
 
 printf("%d / %d = %d\n", N1, N2, Division);
    return 0;
}