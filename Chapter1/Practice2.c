#include <stdio.h>

int main()
{
    // int a;
    // a = 1;
    int radius = 5;
    int Height = 2;
    printf("What is the radius");
    scanf("%d", &radius);

    int area = 22/7*(radius*radius);
    printf("The Area of the circle is %d",area);
    printf("\nWhat is the height");
    scanf("%d", &Height);
    int volume = area*Height;
    printf("The Volume of the cylinder is %d",volume);

    return 0;
}