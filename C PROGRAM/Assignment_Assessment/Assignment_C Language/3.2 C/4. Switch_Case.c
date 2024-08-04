//Q-7 : WAP to show
//1. Monday to Sunday using switch case

#include <stdio.h>

int main()
 {

int days;

printf("Enter the number between 1-7 \n");
scanf("%d",&days);

switch(days)
{

case 1 :

	printf("\nMonday\n");
	break;

case 2 :

	printf("\nTuesday\n");
	break;


case 3 :

	printf("\nWednesday\n");
	break;


case 4 :

	printf("\nThursday\n");
	break;


case 5 :

	printf("\nFriday\n");
	break;

case 6 :

	printf("\nSaturday\n");
	break;


case 7 :

	printf("\nSunday\n");
	break;


default :
	printf("\nInvalid Input\n");
}

  return 0;
}



//2. Vowel or Consonant using switch case


//#include <stdio.h>
//
//int main()
// {
//
//char alpha;
//
//printf("Enter the Alphabet to Check Vowel or Consonent \n");
//scanf("%c",&alpha);
//
//switch(alpha)
//{
//
//case 'a' :
//
//	printf("\nis Vowel\n");
//	break;
//
//case 'e' :
//
//		printf("\nis Vowel\n");
//	break;
//
//
//case 'i' :
//
//	printf("\nis Vowel\n");
//	break;
//
//
//case 'o' :
//
//	printf("\nis Vowel\n");
//	break;
//
//
//case 'u' :
//
//		printf("\nis Vowel\n");
//	break;
//
//case 'A' :
//
//	printf("\nis Vowel\n");
//	break;
//
//
//case 'E' :
//
//	printf("\nis Vowel\n");
//	break;
//
//case 'I' :
//
//	printf("\nis Vowel\n");
//	break;
//
//case 'O' :
//
//	printf("\nis Vowel\n");
//	break;
//
//case 'U' :
//
//		printf("\nis Vowel\n");
//	break;
//
//
//default :
//	printf("\nis Consonant\n");
//}
//
//  return 0;
//}