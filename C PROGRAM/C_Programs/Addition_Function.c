#include <stdio.h>
// Protocol Function
int sum (int a, int b);


// Main Function
int main ()
{
int a,b;
printf ("Enter a Number of A : ");
scanf ("%d",&a);

printf ("Enter a Number of B : ");
scanf ("%d",&b);



int s = sum (a,b);

printf ("Sum is %d",s);

return 0;

}


// Defination Function

int sum(int a, int b)
{
	return a+b;
}

