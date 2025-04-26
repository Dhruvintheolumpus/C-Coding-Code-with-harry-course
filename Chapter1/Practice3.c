#include <stdio.h>

int main()
{
    // int a;
    // a = 1;
    float celcius = 1;
    printf("What is the celcius");
    scanf("%f", &celcius);
    float Fahrenheit = (celcius*9.0/5.0)+32;
    printf("The Farenhit is %f", Fahrenheit);

    return 0;
}