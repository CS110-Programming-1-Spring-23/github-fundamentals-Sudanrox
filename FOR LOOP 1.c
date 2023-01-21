/*
Program to count from 1 to n using a FOR loop
User will enter in a number for n
Program will print out 1 to n each number on a separate line
*/

#include <stdio.h>

int main() {
    int user_input, num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &user_input);

    // Using for loop to iterate through range of numbers
    for (num = 1; num <= user_input; num++) {
        // Printing current number
        printf("%d\n", num);
    }

    return 0;
}
