#include <stdio.h>

int main()
 {

int Number_1,Number_2,Number_3,Max;

printf("Enter the Number = /n");
scanf("%d%d%d",&Number_1,&Number_2,&Number_3);

if (Number_1>Number_2)
	{
	
		if(Number_1>Number_3)
		{
		printf("The Maximum number is %d /n",Number_1);	
	
		else
		{
		printf("The Maximum number is %d /n",Number_3);	
		}		
		}

else {
		printf("The Maximum number is %d /n",Number_2);	
	}
  }
  return 0;
}