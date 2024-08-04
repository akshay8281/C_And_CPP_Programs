#include<stdio.h>

 int main()
{
	int a[2],i,j,asc;
	
	
	
	
	printf("\nenter the element:\n");
	for(i=0; i<2; i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<2; i++)
		{
		
		for(j=i+1; j<2; j++)
		{
			if (a[i] > a[j])
			{
				asc=a[i];
				a[i]=a[j];
				a[j]=asc;
			}
		}
	}
	printf("Ascending order :",asc);
	
	for(i=0; i<2; i++)
	{
		printf("\n%d",a[i]);
	}
	return 0;
}

