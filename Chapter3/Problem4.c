#include <stdio.h>

int main(){
    // int length = 3;
    // int breadth = 6;
    int year;
    printf("Enter year\n");
    scanf("%d", &year);
    int divcheck = year%4;
    if ((year%4 == 0 && year%100) || year %400==0)
    {
            printf("It is a leap year %d", year);
    }
    else{printf("u are gay");}

    return 0;
}