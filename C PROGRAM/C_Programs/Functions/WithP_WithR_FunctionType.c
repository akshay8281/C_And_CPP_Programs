//Type of Function - 

//1. Without Parameter and Without Return value
//2. With Parameter and Without Return value
//3. Without Parameter and With Return value
//4. With Parameter and With Return value



//4. Example of With Parameter and With Return value

#include <stdio.h>

int operators(int, int);  //parameter and return value

int main ()
{
	int x,y,result;
	
	printf("\n******** Function Type - With Parameter and With Return Value ********\n\n");
	
	printf("\nEnter a Number of X : \n");
	scanf("%d",&x);
	
	printf("\nEnter a Number of Y : \n");
	scanf("%d",&y);
	
	result = operators(x,y);
	

	printf("\n\nThe Multiplication of X and Y is : %d\n",result);
}

int operators(int x, int y)		//arguement
{

	return x*y;			//it will return the addition
}