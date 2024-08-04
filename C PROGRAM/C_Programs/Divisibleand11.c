#include <stdio.h>

//Divisible by two digits

int main()
 {
 	
int num ;
printf("Enter the number = ");
scanf("%d",&num);

 
if((num % 5 == 0) && (num % 10 == 0))
{
printf("Your number is divisible by 5 and 10 = %d");	
}

else
{
	printf("Your number is not divisible by 5 and 10 = %d");	
}

  return 0;
}
