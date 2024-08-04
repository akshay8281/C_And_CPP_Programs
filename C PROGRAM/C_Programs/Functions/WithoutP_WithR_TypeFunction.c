//Type of Function - 

//1. Without Parameter and Without Return value
//2. With Parameter and Without Return value
//3. Without Parameter and With Return value
//4. With Parameter and With Return value



//3. Example of Without Parameter and With Return value

#include <stdio.h>

int factorial ()  //Return Type Method
{
	int num,i,f = 1;
	
	printf("\n******** Factorial Number Concept Using Function Type - Without Parameter and With return Value ********\n\n");
	
	
	printf("\nEnter a Number :\n");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
		f = f * i;
    }
    
return f;			//it will return the Factorial Value
}

 int main ()
{
	int result;
	
	result=factorial();
	
	printf("\nFactorial is : %d\n",result);
}