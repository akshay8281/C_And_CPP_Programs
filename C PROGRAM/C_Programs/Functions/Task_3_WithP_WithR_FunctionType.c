//Write a program to check the number is even or odd- with and with 

//Task 3 : - Functioon Type - With Parameter and With Return value

#include<stdio.h>

int evenNum(int number);

 
int main()
{
    printf("\n*********** Functioon Type - With Parameter and With Return value ***********\n");
    printf("\n------- Even or Odd by using Function Type -------\n\n");
    
    int number;
    printf("\nEnter a Number : \n");
    scanf("%d", &number);

    if(evenNum(number))
    {
        printf("\n%d is a Even Number\n", number);
    }
    
    else
    {
        printf("\n%d is an Odd Number\n", number);
    }
 
    return 0;
}

int evenNum(int number)
{

    return ((number % 2) == 0);
}
