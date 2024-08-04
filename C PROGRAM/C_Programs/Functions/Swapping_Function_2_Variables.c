//Swapping using function with onlu 2 Variables

#include<stdio.h>

void swap()
{
	int a,b;
	
	printf("\nEnter the Value of A is\n");
	scanf("%d",&a);
	
	printf("\nEnter the Value of B is\n");
	scanf("%d",&b);
	
	a = a+b;
	b = a-b;
	a = a-b;
	
	printf("\n\nAfter Swapping the Value of A is %d \n",a);
	printf("\nAfter Swapping the Value of B is %d \n",b);
}

int main()
{
	swap();
}