#include <stdio.h>

int main()
 {

char Vovel;

printf("Enter the Alphabet \n");
scanf("%c",&Vovel);

switch(Vovel)
{
	case 'a' :
		{
		printf("Letter a is Vovels");
		break;	
		}
		
		
	case 'A' :
	{
		printf("Letter A is Vovels");
		break;
	}
	
	
		case 'e' :
	{
		printf("Letter e is Vovels");
		break;
	}
	
		case 'E' :
	{
		printf("Letter E is Vovels");
		break;
	}
	
	
		case 'i' :

	{
		printf("Letter i is Vovels");
		break;
	}

		case 'I' :
	{
		printf("Letter I is Vovels");
		break;
	}
	
		case 'o' :
	{
		printf("Letter o is Vovels");
		break;
	}
	
	
		case 'O' :
	{
		printf("Letter O is Vovels");
		break;
	}
	
		case 'u' :
	{
		printf("Letter u is Vovels");
		break;
	}
		
		
		case 'U' :
	{
		printf("Letter U is Vovels");
		break;
	}
	
	
	default :
		printf("This is consonant Letter");
		break;
	}
return 0;	
}

