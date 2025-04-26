#include <stdio.h>

int main() {
    int a = 0;
    int s = 0;
    int i = 0;

    // Input a number
    printf("Enter a number: ");
    scanf("%d", &a);

    // Loop from 1 to 10
    for (i = 1; i <= 10; i++) {
        s = a * i;
        printf("%d x %d = %d\n", a, i, s); // Proper multiplication table format
    }

    return 0;
}

