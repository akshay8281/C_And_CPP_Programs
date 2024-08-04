//Type of Function - 

//1. Without Parameter and Without Return value
//2. With Parameter and Without Return value
//3. Without Parameter and With Return value
//4. With Parameter and With Return value



//2. Example of With Parameter and Without Return value


#include <stdio.h>

void addition(int num1, int num2)
{
	int x,y;

	printf("\n******* Type of Function - With Parameter and Without Return value *******\n\n");

	printf("\nEnter the Number of X \n");
	scanf("%d",&x);
	
	printf("\nEnter the Number of y \n");
	scanf("%d",&y);
	
	printf("\nThe Addition of X and Y is %d\n",x+y);
}

int main ()
{
	int x , y;
	
	addition (x,y);
}