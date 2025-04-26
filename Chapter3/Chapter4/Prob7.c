#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    int s = 0;
    int i = 10;
    int n = 0;
    for (i = 1; i <= 10; i++) {
        s = a * i;
        n = n+s;
        printf("%d x %d = %d\n", a, i, s); // Proper multiplication table format
    }
    printf("%d",n);
    return 0;
}
