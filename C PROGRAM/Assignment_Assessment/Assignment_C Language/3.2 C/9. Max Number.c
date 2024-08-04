//Q-12 :- Write a program to find out the max from given number (E.g., No: -1562
//Max number is 6)


#include <stdio.h>

int main()
 {
 	int i,num1,num2,num3;
 	
 	printf("Enter the Number 1\n");
 	scanf("%d",&num1);
 	
 	printf("\nEnter the Number 2\n");
 	scanf("%d",&num2);
 	
 	printf("\nEnter the Number 3\n");
 	scanf("%d",&num3);

if (num1>=num2)
{
	printf("\n%d is the Largest Number\n",num1);
}

else if (num2>=num3)
{
	printf("\n%d is the Largest Number\n",num2);
}

else {
	printf("\n%d is the Largest Number\n",num3);
}
  return 0;
}
