#include <stdio.h>

int main()
{
    int d = 0;
    printf("Enter the tables number ");
    scanf("%d",&d);
    int arr[10];
    for (int i = 0; i<10;i++){
        int c = i +1;
        int a = d*c;
        arr[i] = a;
        printf("Enter the %d * %d is equal to %d\n",d,c,a);
    }
    return 0;
}
