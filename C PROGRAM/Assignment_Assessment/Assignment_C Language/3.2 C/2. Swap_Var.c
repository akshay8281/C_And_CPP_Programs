//Q-5 : WAP to swap two numbers without using third variable

#include <stdio.h>

int main() {
  
  int var1,var2,change;
  
      printf("Enter thr Variable 1 \n");
      scanf("%d",&var1);
  
	  printf("\nEnter thr Variable 2 \n");
      scanf("%d",&var2);
      
      change = var1;
      var1 = var2;
      var2 = change;
      
      printf("\nThe Swap value of Var 1 is %d and Var 2 is %d\n",var1,var2,change);
      
  
    return 0;
}