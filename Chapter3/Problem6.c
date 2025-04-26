#include <stdio.h>

int main()
{
    int t1 = 0;
    int t2 = 0;
    int t3 = 0;
    int t4 = 0;
    printf("Enter your First M: ");
    scanf("%d", &t1);
    printf("Enter your Second M: ");
    scanf("%d", &t2);
    printf("Enter your Third M: ");
    scanf("%d", &t3);
    printf("Enter your Fourth M: ");
    scanf("%d", &t4);
    if (t1 > t2 && t1 > t3 && t1 > t4)
    {
        printf("The Greatest number is %d", t1);
    }
    else if (t3 > t2 && t3 > t1 && t3 > t4)
    {
        printf("The Greatest number is %d", t3);
    }
    else if (t2 > t1 && t2 > t3 && t2 > t4)
    {
        printf("The Greatest number is %d", t2);
    }
    else if (t4 > t1 && t4 > t3 && t4 > t2)
    {
        printf("The Greatest numebr is %d", t4);
    }

    return 0;
}