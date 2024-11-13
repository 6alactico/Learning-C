// Tests function order by ordering three numbers
#include <stdio.h>

void order(double *smp, double *lgp);

int main (void)
{
    double num1, num2, num3; // Three numbers to put in order
    // Gets test data
    printf("Enter three numbers seperated by blanks > ");
    scanf("%lf%lf%lf", &num1, &num2, &num3);

    // Orders the three numbers
    order(&num3, &num2); // Stores the smaller of num1 and num2 in num1 and the larger in num2
    order(&num2, &num1); // Switches the values of num1 and num3.
    order(&num3, &num2);

    // Displays results
    printf("The numbers in ascending order are: %.2f %.2f %.2f\n", num1, num2, num3);

    return (0);
}

/* Arranges arguments in ascending order.
* Pre: smp and lgp are addresses of defined type double variables
* Post: variable pointed to by smp contains the smaller of the type double values; variable pointed to by lgp contains the larger
*/
void order(double *smp, double *lgp) // Input/Output
{
    double temp; // Temporary variable to hold one number during swap
    // Compares values pointed to by smp and lgp and switches if necessary
    if (*smp > *lgp) {
            temp = *smp;

            *smp = *lgp;
            *lgp = temp;
    }
}