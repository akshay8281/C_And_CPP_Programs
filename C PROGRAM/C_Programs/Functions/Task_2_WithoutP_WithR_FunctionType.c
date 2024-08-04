//Task 2 - Type of Function - Without Parameter and With Return value

//Write a program to find the area of sqaure:-Without and With 

#include <stdio.h>

int square()
{
	int side,area;
	
	
	printf("\n******* Task 2 - Type of Function - Without Parameter and With Return value *******\n\n");
       printf("\n-------- Area of Square from User Input --------\n\n");
						  
		 printf("\nEnter the side for the Square is : \n");
		 scanf("%d",&side);
		 				  
			area = side * side;
			
			return area;  
	
}

int main ()
{
	int Result;
	Result  = square();
	
	printf("\n\nThe Area of Square is %d\n\n",Result);

}