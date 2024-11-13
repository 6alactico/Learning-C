// Write a complete C program that prompts the user for the coordinates of two 3-D points (x1 , y1, z1) and (x2, y2, z2) and displays the distance between them computed

#include <stdio.h>
#include <math.h>

int main () {

    // Variables
    double x1, y1, z1, x2, y2, z2, distance;

    // Input for the coordinates of two 3-D points
    printf("Enter the coordinates of the first 3-D point: ");
    scanf("%lf%lf%lf", &x1, &y1, &z1);
    printf("Enter the coordinates of the second 3-D point: ");
    scanf("%lf%lf%lf", &x2, &y2, &z2);

    // Square Root Calculation
    distance = sqrt(((x1 - x2) * (x1 - x2)) + ((y1 - y2)  (y1 - y2)) + ((z1 - z2) * (z1 - z2)));

    // Output for the distance between the two 3-D points
    printf("The distance between the two 3-D points is %.1lf\n", distance);
}

 