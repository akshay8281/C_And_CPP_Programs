//count "THIS IS  THE EXAMPLE"

#include <stdio.h>
#include <string.h>

void countCharacters(const char *text, int *charCount) {
    
	int i;
	for ( i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ') {
            charCount[(int)text[i]]++;
        }
    }
}

int main() {
	int i;
    char statement[] = "This is the example";
    int charCount[256] = {0}; // Assuming ASCII characters

    countCharacters(statement, charCount);

    printf("Character counts:\n");
    for ( i = 0; i < 256; i++) {
        if (charCount[i] > 0) {
            printf("%c: %d\n", (char)i, charCount[i]);
        }
    }

    return 0;
}



	

	
	
	
	
	 



