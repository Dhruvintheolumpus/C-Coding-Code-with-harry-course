#include <stdio.h>
#include <stdlib.h>

// Function prototypes
void functionName();

int main() {
    printf("Welcome to the C program!\n");
    char str[12];
    char new[20];
    
    printf("Write the string please");
    scanf("%s",str);
    for (int i = 0;i<6;i++){
        int st = 0;
        int ep = 0;
        printf("give me the starting point");

        scanf("%d",&st);
        printf("give me the ending point");

        scanf("%d",&ep);
        int count = ep - st;
        for (int j = 0;j<count;j++){
            int u = st++;
            printf("%c", str[u]);
        }
        break;
        
    }


    // Call your function
    functionName();

    return 0; // Indicate successful completion
}

// Define your functions below
void functionName() {
    // Function implementation
    printf("This is a sample function.\n");
}