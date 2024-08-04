#include<stdio.h>

int main()
{
	int i,j;
	int rows=4;
	
	for(i=0; i<=rows;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",'A'+j);
		}
		printf("\n");
	}
}
