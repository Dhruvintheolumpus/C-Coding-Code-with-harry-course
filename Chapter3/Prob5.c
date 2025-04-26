#include <stdio.h>
#include <ctype.h>

int main() {
    char a;

    // Prompt user for input
    printf("Enter a character: ");
    scanf(" %c", &a); // Use &a to store the input in variable a

    if (a == tolower(a)) {
        printf("It is lowercase\n");
    } else {
        printf("Not lowercase\n");
    }

    return 0;
}