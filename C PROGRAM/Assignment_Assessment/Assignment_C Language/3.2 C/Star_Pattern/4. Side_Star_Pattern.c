#include<stdio.h>

int main()

{
	int i,j,k=0;
	int row=11;
	for(i=0; i<row; i++)
	{
		for(j=0; j<=i; j++)
		{
		printf("*");
	}
	
			printf("\n");
	}
	for(i=row-1; i>0; i--)
	{
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
