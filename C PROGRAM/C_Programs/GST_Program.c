#include <stdio.h>

void calPrice(float value);


int main ()
{
 float  value = 100.00;
 calPrice (value);
 
 printf("\nValue is : %f\n\n", value); 

return 0; 
}

void calPrice(float value)
{
	value = value + (.18 * value);
 printf("\nFinal Price After GST is : %f",value);

}





