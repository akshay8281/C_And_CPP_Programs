#include <stdio.h>

void multiply()
{
	int X,Y;
	
	printf("\n********** Multiplication of Variables using FUNCTION **********\n\n\n");
	printf("Enter the Number of X : \n");
	scanf("%d",&X);
	
	printf("\nEnter the Number of Y : \n");
	scanf("%d",&Y);
	
	printf("\nThe Multiplication of X and Y is %d\n",X*Y);
}

main ()
{
	multiply();
}