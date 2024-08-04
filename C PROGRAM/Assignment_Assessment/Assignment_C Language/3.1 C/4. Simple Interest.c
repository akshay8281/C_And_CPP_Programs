//Q-4 : WAP to find simple interest

# include <stdio.h>

int main(){

int principal,rate,time,interest;

printf("Enter the Principal Amount \n");
scanf("%d",&principal);

printf("Enter the Rate Amount \n");
scanf("%d",&rate);

printf("Enter the Time Amount \n");
scanf("%d",&time);

interest = principal * rate * time / 100;

printf("The Value of Simple Interest is %d",interest);

    return 0;

}
