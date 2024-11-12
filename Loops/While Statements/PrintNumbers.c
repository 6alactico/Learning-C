#include <stdio.h>
int main () {
    int i = 0; // Initialize loop counter

    // First while loop to print numbers 0 to 10
    while (i <= 10) {
        printf("%d\n", i); // Print current value of i
        i++; // Increment the loop counter
    }
    printf("\n");

    i = 10; // Reset the loop counter to 10
    // Second while loop to print numbers 10 to 0
    while (i >= 0) {
        printf("%d\n", i); // Print current value of i
        i--; // Increment the loop counter
    }
    return 0;
}