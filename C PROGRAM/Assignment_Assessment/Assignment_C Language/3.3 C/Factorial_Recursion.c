//wap to find factorial using recursion.


#include<stdio.h>

int fac(int x)
{
if(x>1)
{
	return x*fac(x-1);
	}
}


main()
{
printf("\n%d",fac(5));
}



