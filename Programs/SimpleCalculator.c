/* Create a simple calculator that outputs the equations to a text file. 
Components: Switch/If-Else Statement, While Loop, Function, File Handling */

#include <stdio.h>
#include <float.h> 

void displayName();

int main () {
    char operator;
    double a, b, sum;
    int i = 1;
    FILE *outp;

    // Open file in append mode
    outp = fopen("history.txt", "a");
    if (outp == NULL) {
        printf("Error opening file!\n");
        return 1; // Exit program if file fails to open
    }

    // Program name
    displayName();

    // MAIN CALCULATION LOOP
   while (i) {

    // Read the operator
    printf("Enter an operator (+, -, *, /) or 'q' to quit > ");
    scanf(" %c", &operator);

    // Exit if the user inputs 'q'
    if (operator == 'q') {
        printf("Exiting the program.\n");
        break;
    }

    // Read the operands
    printf("Enter two operands > ");
    if (scanf("%lf%lf", &a, &b) != 2) {
        printf("Invalid operands. Try again.\n");
        continue;
    }

    // Perform calculation
    switch (operator) {
        case '+':
            sum = a + b;
            break;
        case '-':
            sum = a - b;
            break;
        case '*':
            sum = a * b;
            break;
        case '/':
            sum = a / b;
            if (b != 0) {
                sum = a / b;
            } else {
                printf("Error! Division by zero.\n");
                sum = DBL_MAX;
            }
            break;
        default:
            printf("Error! Incorrect Operator Value\n");
            sum = DBL_MAX; // Check for invalid operator
        }

        // If sum is DBL_MAX, indicate an error in calculation
        if (sum == DBL_MAX) {
            printf("Error! Calculation failed.\n");
        } else {
            printf("Result: %.2lf\n", sum);
        }

        fprintf(outp, "%.2lf %c %.2lf = %.2lf\n", a, operator, b, sum);  // Log the calculations in the file

        fflush(outp); // Flush the file buffer to ensure data is written
    }

    fclose(outp); // Close the file
    return 0;
}

void displayName() {
    printf("Simple Calculator\n");
}