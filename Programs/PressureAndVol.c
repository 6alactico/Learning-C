#include <stdio.h>
#include <stdlib.h>
#define a 3.592
#define b 0.0427
#define R 0.08206

double calculatePressure(double n, int T, int vol);

int main () {
    double n, P;
    int T, initial_vol, final_vol, vol_inc;
    FILE* outp;

    outp = fopen("pressureAndVol.txt", "w");
    if (outp == NULL) {
        printf("Error!");
        exit(EXIT_FAILURE);
    }

    printf("Please enter at the prompts the number of moles of carbon dioxide, the absolute temperature, the initial volume in milliliters, the final volume, and the increment volume between lines of the table.");

    printf("\nQuantity of carbon dioxide (moles)> ");
    scanf("%lf", &n);
    printf("Temperature (kelvin)> ");
    scanf("%d", &T);
    printf("Initial volume (milliliters)> ");
    scanf("%d", &initial_vol);
    printf("Final volume (milliliters)> ");
    scanf("%d", &final_vol);
    printf("Volume increment (milliliters)> ");
    scanf("%d", &vol_inc); 

    fprintf(outp, "%.4f moles of carbon dioxide at %d kelvin\n", n, T);
    fprintf(outp, "%10s %20s", "Volume (ml)", "Pressure (atm)\n");
    for (int vol = initial_vol; vol <= final_vol; vol += vol_inc) {
        P = calculatePressure(n, T, vol);
        fprintf(outp, "%10d %20.4lf\n", vol, P);
    }

    fclose(outp);
    return 0;
}

double calculatePressure(double n, int T, int vol)
{
    double P;
    double vol_in_L = vol / 1000.0;
    P = ((n * R * T) / (vol_in_L - b * n) - (a * n * n) / (vol_in_L * vol_in_L));
    
    return P; 
}
