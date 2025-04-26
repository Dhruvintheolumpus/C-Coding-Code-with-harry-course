#include <stdio.h>
int convert(float celcius){
    float Fahrenheit = (celcius*9.0/5.0)+32;
    printf("The Farenhit is %f", Fahrenheit);
}
int main()
{
    float a = 5.00;
    convert(a);
    // int a;
    // a = 1;
    

    return 0;
}