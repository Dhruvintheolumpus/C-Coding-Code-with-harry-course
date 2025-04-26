#include <stdio.h>

int main(){
    int i = 0;
    int a = 0;
    
    int p = 0;
    printf("The number should be bigger than  ");
    scanf("%d", &p);
    printf("The number should be smaller than or equal with ");
    scanf("%d", &a);

    
    
    while(i<a){
        // i = i + 1;
        i = i+1;
        if (i > p)
        {
            printf("Happy Birthday!%d\n",i);
        }
    }
    return 0;
}