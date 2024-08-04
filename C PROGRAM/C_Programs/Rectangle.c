#include <stdio.h>

int main ()
{
int length,width,sum;

printf("Enter the length Number \n");
scanf("%d", &length);

printf("Enter the width Number \n");
scanf("%d", &width);

sum = length * width;

printf("%d * %d = %d\n", length,width,sum);

    return 0;
}