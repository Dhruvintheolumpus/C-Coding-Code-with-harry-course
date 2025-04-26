#include <stdio.h>

int main() {
    int num, isPrime = 1; // Assume the number is prime initially
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num < 2) {
        isPrime = 0; // Numbers less than 2 are not prime
    } else {
        int i = 2; // Starting divisor
        // Use a do-while loop to check for factors
        do {
            if (num % i == 0) {
                isPrime = 0; // Found a factor, so it's not prime
                break; // No need to check further
            }
            i++; // Increment the divisor
        } while (i * i <= num); // Continue while i*i is less than or equal to num
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}
