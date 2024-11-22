#include <stdio.h>
#include <math.h>

// Function Prototype
double scale(double x, int n);

int main (void) {
    double num_1;
    int num_2;

    // Get values for num_1 and num_2
    printf("Enter a real number > "); 
    scanf("%lf", &num_1);
    printf("Enter an integer> ");
    scanf("%d", &num_2);

    // Call scale and display result
    printf("Result of call to function scale is %.3f\n", scale (num_1, num_2)); // Actual Arguments

    return (0);

}

// Multiplies its first argument by the power of 10 specified by its second argument.

double scale(double x, int n) { // Formal Parameters
    double scale_factor; // Local variable - 10 to power n
    scale_factor = pow(10, n); // Calls pow to raise 10 to the power by n
    return (x * scale_factor); // The product of the first formal parameter
}