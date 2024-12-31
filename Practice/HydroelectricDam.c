// Create a program to assist in the design of a hydroelectric dam.
#include <stdio.h>
#define GRAVITATIONAL 9.80
#define EFFICIENCY 0.9
#define WATER_DENSITY 1000


int main () {
    double height, flowRate, mass, work, power;

    // Prompt user for inputs
    printf("Enter the height of the dam: ");
    scanf("%lf", &height);
    printf("Enter the water flow: ");
    scanf("%lf", &flowRate);

    // Calculate mass flow rate
    mass = flowRate * WATER_DENSITY;

    // Calculate the work and power
    work = mass * GRAVITATIONAL * height;
    power = work * EFFICIENCY;

    // Convert power to megawatts (1 megawatt = 10^6 watts)
    power /= 1e6;

    printf("The dam will produce %.2lf megawatts of power.", power);

}