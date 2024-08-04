//Q-5 : WAP to convert years into days and days into years

#include <stdio.h>
 
int main()
{
    int numdays, year, week, days;
 
    printf("Enter the number of days\n");
    scanf("%d", &numdays);
    
    year = numdays / 365;
    week = (numdays % 365) / 7;
    days = (numdays % 365) % 7;
    printf ("\nTotal number of days is %d\n %d years\n %d Weeks\n %d Days\n",
            numdays, year, week, days);
}