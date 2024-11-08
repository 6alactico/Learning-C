// Program to display a number if it is negative

#include <stdio.h>
int main() 
{

    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // True if number is less than 0
    // False if number is more than 0
    if (number < 0) {
        printf("%d is a negative number\n", number);
    }
    else {
        printf("%d is a positive number\n", number);
    }

    return (0);
}

