#include <stdio.h>

int main()
{
    int N1, N2, N3, Max;

    printf("Enter First number: \n");
    scanf("%d", &N1);
    
    printf("Enter Second number: \n");
    scanf("%d", &N2);
    
    printf("Enter Third number: \n");
    scanf("%d", &N3);
    

    if((N1 > N2) && (N1 > N3))
    {
    
        Max = N1;
    }
    else if(N2 > N3)
    {
    
        Max = N2;
    }
    
    else
    {
        Max = N3;
    }

    printf("\nMaximum number from all three numbers is = %d\n", Max);

    return 0;
}