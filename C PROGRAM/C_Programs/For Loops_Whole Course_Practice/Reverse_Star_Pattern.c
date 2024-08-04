#include <stdio.h>

int main ()
{
int i , j, rows;

printf("Enter the numver of rows you want = \n");
scanf("%d", &rows);

for(int i=1;i<=rows;i++)
{
for(int j=i;j<=rows;j++)

{
	printf("*");
	}	
	printf("\n");
}
    return 0;
}
