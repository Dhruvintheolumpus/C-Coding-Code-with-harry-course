#include<stdio.h>

int main()
{
    int length = 1;  // Declare and initialize length
    int breadth = 2; // Declare and initialize breadth

    // Prompt user for input
    printf("What is the length: ");
    scanf("%d", &length);

    printf("What is the breadth: ");
    scanf("%d", &breadth);

    // Calculate the area
    int area = length * breadth;

    // Display the result
    printf("The Area of the rectangle is %d\n", area);

    return 0;
}