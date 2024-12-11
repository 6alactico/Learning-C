/* Create a program that calculates mileage reimbursement for a salesperson at $.35 per mile.*/
#include <stdio.h>
#define RATE 0.35 // Constant

int main()
{
    double beginning = 0.0, ending = 0.0, difference = 0.0;
    double reimbursement = 0.0;

    // Input
    printf("MILEAGE REIMBURSEMENT CALCULATOR\n"); // Display header
    printf("Enter beginning odometer reading=> "); // Prompt user to enter beginning odometer reading
    scanf("%lf", &beginning);
    printf("Enter ending odometer reading=> "); // Prompt user to enter ending odometer reading
    scanf("%lf", &ending);
    
    // Processing
    difference = ending - beginning; // Calculate difference
    reimbursement = difference * RATE; // Calculate reimbursement
    
    // Output
    printf("You traveled %0.1f miles. At $%0.2f per mile, your reimbursement is $%0.2f.", 
    difference, RATE, reimbursement); // Display results
    
    return 0;
}