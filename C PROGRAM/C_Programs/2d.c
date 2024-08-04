//type of array
//1) 1d array
//2) multidimensional array,4,2,8,4,2


#include<stdio.h>
main()
{
	int row,col,sum;
	int a[2][3]={5,1,7,8,9,3};
	int b[2][3]={7,4,2,8,4,2};
	int c[2][3];
	
	printf("--first matrix--");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	
}
	printf("--second matrix--");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
		

}

	printf("--addition matrix--\n");
	
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col] + b[row][col];
			printf(" %d ",c[row][col],sum);
		}
		printf("\n");
		
}
}
