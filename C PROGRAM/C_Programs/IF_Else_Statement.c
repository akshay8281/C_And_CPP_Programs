#include <stdio.h>

int main()
 {

int Num1, Num2;

printf("Enter the number for Num1 = \n");
scanf("%d",&Num1); 

printf("Enter the number for Num2 = \n");
scanf("%d",&Num2);

if(Num1==Num2)
{
	printf("The number you have entered is Unequal\n");
}

else if(Num1<Num2)
{
	printf("The number of Num1 is less than Num2\n");
}

else if(Num1>Num2)
{
	printf("The number of Num1 is GREATER than Num2\n");
}
 
else{
	printf("The number of Num1 is EQUAL to the Num2\n");
}

  return 0;
}
