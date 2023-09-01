#include <stdio.h>

//	Intiger Number Printed

//int main()
//{	
//	int A;
//	for(A=1; A<=10; A++)
//	printf("%d\n",A);

//	return 0;
//}


//Even Number

//int main()
//{
//int b;
//for(b=2;b<=50;b=b+2)
//printf("%d\n",b);

//	return 0;
//}


//ODD Number

//int main()
//{
//int c;
//for(c=1;c<=50;c=c+2)
//
//printf("%d\n",c);
//
//	return 0;
//}


//Ask users to print odd Number,Even Number And Integer Number

//Ask for Integers Number want to Print

//int main()
//{
//	
//int d,num;
//printf("Enter the Number you want to print Intigers\n");
//scanf("%d",&num);
//
//for(d=1;d<=num;d++)
//
//printf("\n%d",d);
//
//return 0;
//}


//Ask for Even Number want to Print

//int main()
//{
//	int z,var;
//	
//	printf("Enter the Number \n\n");
//	scanf("%d",&var);
//	
//	for(z=0;z<=var;z=z+2)
//	
//	printf("\n%d",z);
//	
//	
//	return 0;
//}


//Ask for ODD Number want to print

//int main()
//{
//	int y,Number;
//	
//	printf("Enter the Number tou want to print\n\n");
//	scanf("%d",&Number);
//	
//	for(y=1;y<=Number;y=y+2)
//
//	printf("\n%d",y);	
//	
//	
//	return 0;
//}

//Addition All the Numbers from User Inputs

//int main()
//{
//
//int scan,i,sum=0;
//
//printf("Enter the Number \n\n");
//scanf("%d",&scan);
//
//for(i=1;i<=scan;i++)
//{
//	sum = sum + i;
//}
//
//printf("\nTotal of Inegers from User Input is = %d\n",sum);
//	
//	return 0;
//}


//Both Total of Even Number and Odd Number at the same Time

//int main()
//{
//	
//	int num,i,evensum=0,oddsum=0;
//	
//	printf("Enter the number \n");
//	scanf("%d",&num);
//	
//	for(i=1;i<=num;i++)
//	{
//		if( i%2 == 0)
//		{
//			evensum=evensum+i;
//		}
//		else{
//			oddsum=oddsum+i;
//		}
//	}
//	printf("\n Even Number Total is = %d\n",evensum);
//	printf("\n Odd Number Total is = %d\n",oddsum);
//	
//	
//	return 0;
//}

//Even Number Multiplications

int main()
{
	int v,num,multi=0;
	
	printf("Enter the Number\n\n");
	scanf("%d",&num);
	
	for(v=0;v<=num;v=v+2)
	{
		multi = multi * v;
	}
	
	printf("\nUsers Input Multiplication are = %d\n",multi);
	
	return 0;
}


