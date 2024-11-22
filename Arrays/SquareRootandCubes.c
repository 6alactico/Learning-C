/* Write a program that declares one array for storing the square roots of the integers from 0 through 10 and a second array for storing the cubes of the same integers. */

// Used: For loops and arrays

#include <stdio.h>
#include <math.h>

int main() {
    int squareroots[10]; // Array to store 10 square roots
    int cubes[10]; // Array to store 10 cubes

    // Calculate and store the square root
    for (int i = 0; i < 10; i++) {
        squareroots[i] = sqrt(i + 1);
        printf("Square root of %d: %d\n", i + 1, squareroots[i]);
    }

    // Calculate and store the cube
    for (int i = 0; i < 10; i++) {
        cubes[i] = (i + 1) * (i + 1) * (i + 1);
        printf("Cube of %d: %d\n", i + 1, cubes[i]);

    }

    return 0;
}
