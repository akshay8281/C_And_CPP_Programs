//Swapping using Function in C language

#include<stdio.h>  
  
  
  void swap(int x, int y)  
{  
    int temp;  
  
    temp = x;  
    x    = y;  
    y    = temp;  
  
    printf("\nAfter swapping: X = %d \n", x);  
    printf("\nAfter swapping: Y = %d\n", y);  
}  
  
int main()  
{  
    int x, y;  
  
    printf("Enter values for X\n");  
    scanf("%d", &x);
	  
    printf("\nEnter values for Y\n");  
    scanf("%d", &y);  
  
    printf("\n\nBefore swapping: X = %d and Y = %d\n", x, y);  
 
  
    swap(x, y);  
  
    return 0;  
}  
  
