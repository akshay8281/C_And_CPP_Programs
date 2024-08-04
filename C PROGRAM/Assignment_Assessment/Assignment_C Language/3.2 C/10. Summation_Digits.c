//Q-13 :- Write a program make a summation of given number (E.g., 1523 Ans: -11)

#include <stdio.h>

int main()
{
    int num, sum=0;

    /* Input a number from user */
    printf("Enter any number to find Sum of its Digit: \n\n");
    scanf("%d", &num);

    /* Repeat till num becomes 0 */
    while(num!=0)
    {
        /* Find last digit of num and add to sum */
        sum += num % 10;

        /* Remove last digit from num */
        num = num / 10;
    }

    printf("\nSum of digits = %d\n", sum);

    return 0;
}