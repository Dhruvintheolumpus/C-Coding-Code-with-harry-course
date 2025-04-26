#include <stdio.h>

int main() {
    int a = 0;
    printf("What is the number you wannna check");
    scanf("%d",&a);
    int b = 97;
    int c = a%b;
    if (c == 0){
        printf("The Number %d is divisible by 97",a);
    } else {printf("The number was not divisible by 97");}
    return 0;
}