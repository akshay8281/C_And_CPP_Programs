#include <stdio.h>

int main()
 {
int num;

  printf("Enter a number ");
scanf("%d", &num);

if(num>0)
{
	printf("The number you entered is Positive ");
}

else if (num<0)
{
	printf("The number you entered is Negative... ");
}

else{
	printf("The number is ZERO");
}

  return 0;
}
