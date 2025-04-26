#include <stdio.h>

int main(){
    int i = 0;
    int n = 0;
    do{
       printf("The value of i is %d\n", i);  
       n = n + i;
       i++;
    } while (i<11);

    printf("%d",n);
    
    
    return 0;
}