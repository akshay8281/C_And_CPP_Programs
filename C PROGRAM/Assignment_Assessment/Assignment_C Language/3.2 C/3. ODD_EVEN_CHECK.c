//Q-6 : WAP to find number is even or odd using ternary operator

#include <stdio.h>

int main()
 {
 	
 	int n;
 	
 	printf("Enter the number : \n");
 	scanf("%d",&n);
 	
 	(n % 2 == 0) ? printf("%d is an Even Number\n",n):
 	printf("\n%d is an Odd Number\n",n);
 	
  return 0;
}
