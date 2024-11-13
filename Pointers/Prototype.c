/* Write a prototype for a function sum_n_avg that has 
* three type double input parameters and two output 
* parameters.
*/

#include <stdio.h>
#include <math.h>

// Function prototype to compute sum and average
void sum_n_avg(double num1, double num2, double num3, double *sump, double *avgp) // Pointers

{

// Calculations of sum and average
*sump = num1 + num2 + num3;
*avgp = *sump / 3;

}

int main (void)
{
    double num1, num2, num3, sum, avg;

    printf("Enter three values > ");
    scanf("%lf%lf%lf", &num1, &num2, &num3);

    // Function call
    sum_n_avg(num1, num2, num3, &sum, &avg);

    // Display results
    printf("The sum of the three input arguments is %.1lf\n", sum);
    printf("The average of the three input arguments is %.1lf\n", avg);

    return (0);
}
