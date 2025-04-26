#include <stdio.h>

int main() {
    int start, end;

    // Prompt the user to enter the starting and ending numbers
    printf("Enter the starting number: ");
    scanf("%d", &start);
    
    printf("Enter the ending number: ");
    scanf("%d", &end);

    // Print numbers in reverse order from end to start
    printf("Numbers in reverse order:\n");
    for (int i = end; i >= start; i--) {
        printf("%d ", i);
    }

    printf("\n"); // To add a new line after printing numbers
    return 0;
}
