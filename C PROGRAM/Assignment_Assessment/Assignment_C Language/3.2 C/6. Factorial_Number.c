//Q-9 : WAP to print factorial of given number

#include <stdio.h>

int main()
 {
 	
 	int i,fact=1,num;

printf("Enter the number \n");
scanf("%d",&num);

for (i=1;i<=num;i++)
{
	fact=fact*i;
}
	printf("\nThe Factorial value is %d \n",fact);

  return 0;
}
