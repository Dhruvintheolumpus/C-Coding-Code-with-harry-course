#include <stdio.h>

int main()
{
    int a = 10;
    printf("Enter your income: ");
    scanf("%d", &a);
    int t1 = (5.00 / 100) *  (a - 250000);
    int t2 = 0.05 * (500000 - 250000) + 0.2 * (a- 500000);
    int t3 = 0.05 * (500000 - 250000) + 0.2 * (1000000- 500000) + 0.3 * (a - 1000000);

    if (a >= 250000 && a <= 500000)
    {
        printf("The Tax is %d", t1);
    }
    else if (a >= 500000 && a <= 1000000)
    {
        printf("The Tax is %d", t2);
    }
    else if (a > 1000000)
    {
        printf("The Tax is %d", t3);
    }

    else
    {
        printf("YOu are poor");
    }
    return 0;
}