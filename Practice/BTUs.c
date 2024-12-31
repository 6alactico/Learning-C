#include <stdio.h>

int main () {
    int gallons;
    double efficiency, perGallon = 5.8e6 / 42, BTUs;

    printf("Enter the number of gallons of oil burned: ");
    scanf("%d", &gallons);
    printf("Enter the efficiency of the house's oil furnance (enter a percentage): ");
    scanf("%lf", &efficiency);

    BTUs = perGallon * gallons * (efficiency / 100);

    printf("%.2lf is how many BTUs of heat are delieved to a house.", BTUs);

}



/* 42 Gal = 5.8 * 10^6 = 5,800,000
84 = 11,600,000
138,095 = 13,809,500 */
