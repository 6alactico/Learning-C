/* Create a program to take 5 values from the user and store them. Print the elements stored in the array. */
#include <stdio.h>

int main () {

    int values[5];

    // Gets user input
    printf("Enter 5 integers: ");

    // Takes input and stores it in an array
    for(int i = 0; i < 5; ++i) { // For loop to store five inputs in an array
        scanf("%d", &values[i]);
    }

    printf("The 5 integers entered are ");

    // Prints elements of the array
    for(int i = 0; i < 5; ++i) { // For loop to print five inputs
        printf("%d", values[i]);
    }

    return 0;
}