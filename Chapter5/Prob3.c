#include <stdio.h>
int convert(int mass){
    float g = 9.8;
    float f = g*mass;
    printf("The Force is %fN", f);
}
int main()
{
    int a = 45;
    convert(a);
    // int a;
    // a = 1;
    

    return 0;
}