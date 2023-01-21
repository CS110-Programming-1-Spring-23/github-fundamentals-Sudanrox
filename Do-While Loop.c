#include <stdio.h>

int main() {
    int sum = 0, number;

    // Continuously asking for a number
    do {
        printf("Enter a number: ");
        scanf("%d", &number);

        // Adding entered number to the sum
        sum += number;
    } while (number >= 0);

    // Printing the sum of all entered numbers
    printf("Sum of all entered numbers: %d", sum);

    return 0;
}
