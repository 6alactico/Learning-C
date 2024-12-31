// Determine the value of a collection of coins

#include <stdio.h>
int main (void) {
    char first, middle, last;
    int pennies, nickles, dimes, quarters, dollars, change, totalDollars, totalCents;

    printf("Enter your 3 intials: ");
    scanf("%c%c%c", &first, &middle, &last);

    printf("Number of dollars: ");
    scanf("%d", &dollars);
    printf("Number of quarters: ");
    scanf("%d", &quarters);
    printf("Number of dimes: ");
    scanf("%d", &dimes);
    printf("Number of nickles: ");
    scanf("%d", &nickles);
    printf("Number of pennies: ");
    scanf("%d", &pennies);

    totalCents = 100 * dollars + 25 * quarters + 10 * dimes + 5 * nickles + pennies;

    totalDollars = totalCents / 100;
    change = totalCents % 100;

    printf("\n\n%c%c%c Coin Credit\nDollars: %d\nChange: %d cents\n", first, middle, last, totalDollars, change);

    return(0);

}