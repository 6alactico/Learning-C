/* Write a program that will determine the total cost of a house after a five-year period and run the program for each of the following sets of data. */

#include <stdio.h>

// Function Prototypes
void instruct(void); // void function without arguments
float total_cost(float initial_cost, float fuel_cost, float tax_rate); // function with arguments and a result

int main () {

    // Variables
    float initial_cost, fuel_cost, tax_rate;

    // Function Call Statement
    instruct(); // void function without arguments

    printf("Enter the initial cost of the house: ");
    scanf("%f", &initial_cost);
    printf("Enter the estmiated annual fuel costs: ");
    scanf("%f", &fuel_cost);
    printf("Enter the annual tax rate: ");
    scanf("%f", &tax_rate);

    printf("The total cost of a house after a five-year period is %.2f\n", total_cost(initial_cost, fuel_cost, tax_rate));

    return 0;

}

// Function Definitions
void instruct(void) { // void function without arguments

    printf("In shopping for a new house, you must consider several factors\n");

}

float total_cost(float initial_cost, float fuel_cost, float tax_rate) { // function with arguments and a result

    // Function Call
    float total_cost = initial_cost + (fuel_cost * 5) + (initial_cost * tax_rate * 5); // function with arguments and a result

    return total_cost;

}
