/* Objective: Create a program that prompts the user to 
* enter an integer n, uses Gosper's formula to 
* approximate n!, and then displays the result. */

#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979

// Function prototype 
double appFac(int n);

int main()
{
    int n;

    // Get user input of integer n
    printf("What value of n would you like to find the approximate factorial for? ");
    scanf("%d", &n);
    
    printf("Finding %d! using approximation .....\n", n);
    
    // Display result 
    printf("%d! is approximately %.3f\n", n, appFac(n));
    
    return 0;
}

// Function definition 
double appFac(int n)
{
    double int_val1, int_val2;

    // Calculate intermediate values 
    int_val1 = 2.0 * n + 1.0 / 3.0;
    int_val2 = sqrt((2.0 * n + 1.0 / 3.0) * PI);
    
    // Display intermediate values 
    printf("Intermediate value ... %.6f\n", int_val1);
    printf("Intermediate value ... %.6f\n", int_val2);
    
    return pow(n, n) * exp(-n) * int_val2;
}