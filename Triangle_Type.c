#include <stdio.h>

int main()
 {

int side1,side2,side3;

printf("Enter the number for side 1\n");
scanf("%d",&side1);

printf("Enter the number for side 2\n");
scanf("%d",&side2);

printf("Enter the number for side 3\n");
scanf("%d",&side3);



if(side1 == side2 && side2 == side3 && side1 == side3)

{
	printf("The Triangle is Equilibrium \n");
}


else if (side1 == side2 || side2 == side3 || side1 == side3)
	{
		printf("The Triangle is isosceles");
	}
	
	
else{
	printf("The Triangle is scalene");
}

  return 0;
}
