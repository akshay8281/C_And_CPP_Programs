#include <stdio.h>
#include <string.h>

int main() {
    // Declare two strings
    char str1[] = "Hello";
    char str2[] = "World";

    // Compare the two strings using strcmp
    int result = strcmp(str1, str2);

    // Display the result of the comparison
    if (result == 0) {
        printf("The two strings are equal.\n");
    } else if (result < 0) {
        printf("str1 is less than str2.\n");
    } else {
        printf("str1 is greater than str2.\n");
    }

    return 0;
}
