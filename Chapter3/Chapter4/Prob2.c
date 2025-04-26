#include <stdio.h>

int main() {
    int a = 5;  // Multiplication table for number 5
    int s = 0;
    int i = 0;
    int n = 10;

    // Loop from n to 1 for printing the multiplication table in reverse order
    for (i = n; i >= 1; i--) {
        s = a * i;
        printf("%d x %d = %d\n", a, i, s);
    }
    
    return 0;
}
