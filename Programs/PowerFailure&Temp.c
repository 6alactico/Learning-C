/* Objective: Estimate the temperature in a freezer (in °C) given the elapsed time (hours)
* since a power failure. */

#include <stdio.h>

int main() {
    
    double elapsed_time, hours, minutes, temperature;
    
    printf("POWER FAILURE AND TEMPERATURE\n");
    // Input
    printf("Enter the time in hrs and minutes since the power failure > ");
    scanf("%lf%lf", &hours, &minutes);
    
    // Processing
    elapsed_time = hours + (minutes / 60);
    temperature = (4 * (elapsed_time * elapsed_time)) / (elapsed_time + 2) - 20;
    
    // Output
    printf("The temperature is %0.2f°C after %0.2f hours.\n",
   temperature, elapsed_time);

    return 0;
}