#include <stdio.h>

int main()
{
    // int a;
    // a = 1;
    int length = 1;
    int breadth = 2;
    printf("What is the length");
    scanf("%d", &length);
    printf("What is the breadth");
    scanf("%d", &breadth);
    int area = length*breadth;
    printf("The Area of the rectangle is %d",length*breadth);

    return 0;
}