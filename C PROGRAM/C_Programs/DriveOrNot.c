#include <stdio.h>

int main()
 {

int age;

  printf("Enter the age of person : ");
  scanf("%d", &age);
  
  if(age>18)
  {
  	printf("Yes.... you can drive the car : ");
  }
else {
	printf("Sorry.... you cannot not eligible for driving.....");
}

  return 0;
}
