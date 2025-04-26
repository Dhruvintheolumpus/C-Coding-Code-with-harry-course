#include <stdio.h>
int p(int x,int y){
    int s = x+y;
    int* a = &s;

    printf("The sum is %d",s);
    return a;
}
int avg(int x,int y){
    int a = (x+y)/2.0;
    int* ad = &a;
    printf("The Average of two nunbers are %d and adress is ",a);
    return ad;
}
int main(){
    int i = 72;
    int k = 4;
    int* ptr1;
    int* ptr2;
    ptr2 = avg(i,k);
    printf("%p",ptr2);

    return 0;
}

