//Task 1 - Type of Function - With Parameter and Without Return value

//Write a program to find the average of 5 numbers:- With and Without

#include <stdio.h>

void sum(int a, int b, int c, int d, int e)
{

	 
//	int a,b,result;
	
		printf("\n******* Task 1 - Type of Function - With Parameter and Without Return value *******\n\n");
		printf("\n-------- Average of 5 Number from User Inputs --------\n\n");
	
	printf("\nEnter a Number of A : \n");
	scanf("%d",&a);
	
	printf("\nEnter a Number of B : \n");
	scanf("%d",&b);
	
	printf("\nEnter a Number of C : \n");
	scanf("%d",&c);
	
	printf("\nEnter a Number of D : \n");
	scanf("%d",&d);
	
	printf("\nEnter a Number of E : \n");
	scanf("%d",&e);
	
	
		int total,average;
	
	total = a + b + c + d + e;
	
	average = total / 5;
	
	
printf("\n\nThe Sum of Total Number is : %d\n",total);

printf("\n\nThe Average of Total Number is : %d\n",average);
	
}

int main ()
{
	int a , b, c, d, e;
	
	sum (a , b, c, d, e);
}