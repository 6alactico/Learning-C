/* Write a program that prompts the user to enter three * numbers, calculates the average of the three numbers, * and displays the result.
*/

#include <stdio.h>

int main()
{
    // Variables
    double number1, number2, number3;
    double average;

    // Get user input of three numbers
    printf("Enter three numbers> ");
    scanf("%lf%lf%lf", &number1, &number2, &number3);

    average = (number1 + number2 + number3) / 3;

    printf("The average of the three numbers is %.2lf\n", average);

    return(0);

}