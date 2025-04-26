#include <stdio.h>

int main()
{
    int p = 0;
    int n = 0;
    int did[6]= {1,2,3,4,-1,-2,-3};
    for (int i = 0;i<6;i++){
        int c = did[i];
        if (c > 0){
            p++;    
        }
        else if (c<0){
            n++;
        }

    }
    printf("The positibe numbers are %d",p);
    printf("The negative numbers are %d",n);
    // for (int i = 0; i<10;i++){
    //     int c = i +1;
    //     int a = d*c;
    //     arr[i] = a;
    //     printf("Enter the %d * %d is equal to %d\n",d,c,a);
    // }
    return 0;
}
