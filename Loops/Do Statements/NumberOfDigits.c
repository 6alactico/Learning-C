// Write a program that calculates the number of digits in an integer entered by the user

#include <stdio.h>
int main () {
    int digits = 0, n;
    printf("Enter a nonnegative integer: ");
    scanf("%d",&n);

    // Divide user input by 10 repeatdely until it becomes 0 
    do {
        n /= 10;
        digits++;
    } while (n > 0);
    printf("The number has %d digit(s).\n", digits);

    return 0;
}