//Q 15 :- Star Patterns

#include <stdio.h>

//Star_Pattern 1

//int main()
// {
//
//int num=0,row,col;
//
//printf("Enter the number \n");
//scanf("%d",&num);
//
//for (row=0;row<=num;row++)
//{
//	for (col=0;col<=row;col++)
//	{
//		printf("%d",num);
//	}
//	printf ("\n");
//}
//
//  return 0;
//}


//Star_Pattern 2

//int main()
// {
//
//int row,col;
//int n=65;
//
//
//for (row=1;row<=6;row++)
//{
//	for (col=1;col<=row;col++)
//	{
//		printf("%c",n);
//		n++;
//	}
//	printf ("\n");
//}
//
//  return 0;
//}


//Pyramid Star Pattern 3


//int main()
//{
//	int n, s, i, j;
//	
//	printf("Enter number of rows: \n\n");
//	scanf("%d",&n);
//	
//	for(i = 1; i <= n; i++)
//	{
//	//for loop for displaying space
//		for(s = i; s < n; s++)
//		{
//		printf(" ");
//		}
//		//for loop to display star equal to row number
//		for(j = 1; j <= (2 * i - 1); j++)
//		{
//		printf("*");
//		}#include<stdio.h>

//Left Side Pyramid and Reverse Star Pattern

//int main()
//{
//	int n, i , j;
//	printf("Enter number of rows: ");
//	scanf("%d",&n);
//		for(i = 1; i <= n; i++)
//		{
//			for(j = 1; j <= i; j++)
//			{
//				printf("*");
//			}
//				printf("\n");
//		}
//		
//		for(i = n; i >= 1; i--)
//		{
//			for(j = 1; j <= i; j++)
//			{
//				printf( "*");
//			}
//// ending line after each row
//				printf("\n");
//		}
//	
//	return 0;
//}


//Star Pattern in Number 123

int main()
 {

int num=0,row,col;

printf("Enter the number \n");
scanf("%d",&num);

for (row=1;row<=num;row++)
{
	for (col=1;col<=row;col++)
	{
		printf("%d",row);
		
	}
	printf ("\n");
}

  return 0;
}


