#include <stdio.h>

int main()
{
    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    printf("Enter your Hindi M: ");
    scanf("%d", &t1);
    printf("Enter your English M: ");
    scanf("%d", &t2);
    printf("Enter your Maths M: ");
    scanf("%d", &t3);
    int total = t1 + t2 + t3;
    int pass = 0.04;

    if (t1 < 33 || t2 < 33 || t3 < 33)
    {
        printf("You are failed due to less marks in individual subject(s)\n");
    }
    else if ((t1 + t2 + t3) / 3 < 40)
    {
        printf("You are failed due less percentage\n");
    }
    else
    {
        printf("You are passed!");
    }
    return 0;
}