#include <stdio.h>

int main() {  //Intializing the program
    int n, i; //Declaring the number
    printf("Enter a number: ");  //Asking number for user
    scanf("%d", &n);    //The program first takes input from the user using the scanf() function and stores                     it in the variable n

    for (i = 1; i <= n; i++) {  // Then the program uses a for loop to iterate through the range of numbers                                 from 1 to n.The for loop uses the variable i as the loop counter and                             initializes it to 1. The loop continues until i is less than or equal to n
        printf("%d\n", i);  //prinitng the output
    }                        // In each iteration of the loop, the current value of i is printed using the                         printf() function, and then i is incremented by 1 using the i++ statement. The                          \n at the end of the printf() statement is used to print each number on a                             new line.

    return 0;
}

