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
    int k = 36;
    int* ad1 = &i;
    int* ad2 = &k;
    int** s = &ad1;
    int*** u = &s;
    printf("The values of %d and %d should be same ",**s,***u);


    return 0;
}

