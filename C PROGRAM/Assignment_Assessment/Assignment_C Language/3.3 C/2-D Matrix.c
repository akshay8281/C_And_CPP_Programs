#include <stdio.h>
main() 
{
	int row,col,sum;

	int a[4][2]={2,4,6,8,10,12,14,16};
		int b[4][2]={1,3,5,7,9,11,13,15};
	int c[4][2];
	
	printf("..first matrix..\n");
	
	for(row=0; row<4; row++)
	{
		for(col=0; col<2; col++)
	
	{
	printf(" %d ",a[row][col]);
}
printf("\n");
}

	


	printf("..second matrix..\n");
	
	for(row=0;row<4;row++)
	{
		for(col=0;col<2;col++)
	
	{

	printf(" %d ",b[row][col]);
}
printf("\n");
	
}


	printf("..add of matrix..\n");
	
	for(row=0;row<4;row++)
	{
		for(col=0;col<2;col++)
	{
	
		c[row][col]= a[row][col] + b[row][col];
	
	
	printf(" %d ", c[row][col],sum);
}
printf("\n");
}

printf("..subtraction of matrix..\n");

	for(row=0;row<4;row++)
	{
		for(col=0;col<2;col++)
	{
	
		c[row][col]= a[row][col] - b[row][col];
	
	
	printf(" %d ", c[row][col],sum);
}
printf("\n");
}

printf("..multiplication of matrix..\n");
	for(row=0;row<4;row++)
	{
		for(col=0;col<2;col++)
	{
	
		c[row][col]= a[row][col] * b[row][col];
	
	
	printf(" %d ", c[row][col],sum);
}
printf("\n");
}
}


