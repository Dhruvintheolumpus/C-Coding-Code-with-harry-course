#include <stdio.h>
int gm(){
    printf("Good Morning\n");
}
int ga(){
    printf("Good Afternoon\n");
}
int gd(){
    printf("Good Night\n");
}
int mul(int x,int y){
    printf("The value of the multiplication is%d ",x*y);
    return x*y;
}
int aa(int a){
    printf("The are of the square is %f", pow(a,2));
    return a*a;

}
int main(){
    int a,b;
    a = 2;
    b = 3;
    int c = mul(a,b);
    mul(a,b);
    aa(10);

    printf("%d",c);
    gm();
    ga();
    gd();
    
    return 0;
}