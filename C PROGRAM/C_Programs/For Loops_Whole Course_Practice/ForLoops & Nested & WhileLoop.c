#include <stdio.h>

int main()
 {

// 2. Nested For Loop

//Patterns

//int row,col;
//for (row=1;row<=5;row++)
//{
//for (col=1;col<=5;col++)
//{
//	printf("*");
//}
//	printf("\n");
//}

//Triangle Pattern

//int row,col;
//
//for (row=1;row<=5;row++)
//{
//for (col=1;col<=row;col++)
//{
//	printf("*");
//}
//	printf("\n");
//} 
 
 
// Number in Truangle Row Pattern
// int row,col;
// 
//
//for (row=1;row<=5;row++)
//{
//for (col=1;col<=row;col++)
//{
//	printf("%d",row);
//}
//	printf("\n");
//} 
 
 
 
 // Number in Truangle Col Pattern
// int row,col;
// 
//
//for (row=1;row<=5;row++)
//{
//for (col=1;col<=row;col++)
//{
//	printf("%d",col);
//}
//	printf("\n");
//} 
 
 
 
// Triangle Pattern with number in Sequence

int row,col;
int n=1;

for (row=1;row<=5;row++)
{
for (col=1;col<=row;col++)
{
	printf("%d",n);
		n++;
}
	printf("\n");
} 
 
 
//Alphabetic Table in traingle

//int row,col;
//int n=65;
//
//for (row=1;row<=5;row++)
//{
//for (col=1;col<=row;col++)
//{
//	printf("%c",n);
//		n++;
//}
//	printf("\n");
//} 

 

//Same Alphabetiic Triangle Pattern

// int row,col;
//int n=65;
//
//for (row=1;row<=5;row++)
//{
//for (col=1;col<=row;col++)
//{
//	printf("%c",n);
//		
//}
//n++;
//	printf("\n");
//} 
 
 
// Reverse Pattern
 
////int row,col; Pending
//int n=65;Pending
//
//for (row=1;row<=5;row--)
//{
//for (col=1;col<=row;col++)
//{
//	printf("*",n);
//n++;		
//}
//
//	printf("\n");
//} 

//Reverse Star Pattern

int row,col;
//int n=65;
for (row=5;row>=1;row--)
{
	for (col=1;col<=row;col++)
	{
		printf("*");
	}
	n++;
	printf("\n");
}

 
 
// C Basic Programs Website



//While Loop

//Type 1-10 use of while Loop

//int i=1;
//while(i<=10)
//{
//	printf("\n%d",i);
//	i++;
//}
 
// Even Number While Loop
// 
// int i=2;
//while(i<=10)
//{
//	printf("\n%d",i);
//	i=i+2;
//}
 
 
// Odd Number While Loop
 
// int i=1;
//while(i<=10)
//{
//	printf("\n%d",i);
//	i=i+2;
//}
 

  return 0;
}
