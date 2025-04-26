
#include <stdio.h>

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    printf("The table of ");
    scanf("%d",&a);
    printf("The table of ");
    scanf("%d",&b);
    printf("The table of ");
    scanf("%d",&c);
    int arr[3][10];
    int mul[] = {a, b, c};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = mul[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("The value of arr[i][j] is %d\n", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
