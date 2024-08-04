//Q-8 :- Looping programs:

//1. WAP to print 972 to 897 using for loop

//#include <stdio.h>
//
//int main() {
//   int i, start, end;
//
//   start = 897;
//   end = 972;
//
//
//   for(i = end; i >= start; i--) 
//      printf("%2d  ", i);
//
//   return 0;
//}

//2. WAP to take 10 no. Input from user and find out
//3. How many Even numbers are there
//4. How many odd numbers are there
//5. Sum of even numbers
//6. Sum of odd numbers

//#include<stdio.h>
//
//int main()
//{
//	int i,n,odd=0,even=0;
//	
//	printf("Enter the number :-  ");
//	scanf("%d",&n);
//	
//	printf("\nEven Number is :-  ");
//	
//	for(i=0;i<=n;i++)
//	{
//	if(i%2==0)
//		{
//		printf("\n%d",i);
//		even++;
//		}		
//	}
//	
//	
//	printf("\n\nOdd Number is :- ");
//	for(i=0;i<=n;i++)
//	{
//	if(i%2==1)
//		{
//		printf("\n%d",i);
//		odd++;
//		}		
//	}
//	printf("\n\n*****************************************");
//	printf("\n\nTotal of Even Number is %d\n",even);
//	printf("\nTotal of Odd Number is %d\n",odd);
//	
//	return 0;
//}


//WAP to print table up to given numbers

#include <stdio.h>
int main()
{
   int i, num;
   
   printf("Enter number to print table: \n");
   scanf("%d", &num);
   
   for(i=1; i<=10; i++)
   {
      printf("\n%d * %d = %d\n", num, i, (num*i));
   }
   return 0;
}
