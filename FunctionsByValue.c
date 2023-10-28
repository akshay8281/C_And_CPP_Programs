//Functions Call by Value
#include <stdio.h>

void sqaure (int n);


int main ()
{
int num = 10;

square(num);

printf("%d\n",num);

 return 0;
}

// Call by Value
void square (int n) {
	n = n * n;
	printf("Sqaure Value is %d\n",n); 
}