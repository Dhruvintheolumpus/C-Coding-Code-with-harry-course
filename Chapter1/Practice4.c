#include <stdio.h>

int main()
{
    // int a;
    // a = 1;
    int p = 5;
    int a = 2;
    int t = 3;
    printf("give me the p");
    scanf("%d", &p);
    printf("give me the t");
    scanf("%d", &a);
    printf("give me the r");
    scanf("%d", &t);

    int si = (p * a * t) / 100;
    printf("The Simple interest is %d", si);

    return 0;
}