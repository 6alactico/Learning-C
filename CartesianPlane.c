/* Write a program that takes the x-y coordinates of a point in the Cartesian plane and prints message telling either an axis on which the point lies or the quadrant in which it is found. */

#include <stdio.h>

void displayInfo(void);

int main () {
    float x, y;

    displayInfo();

    printf("Enter x-y coordinaters of a point: ");
    scanf("%f%f", &x, &y);
    
    if (x > 0 && y > 0) {
        printf("(%.1f, %.1f) is in quadrant I\n", x, y);

    } else if (x < 0 && y > 0) {
        printf("(%.1f, %.1f) is in quadrant II\n", x, y);

    } else if (x < 0 && y < 0) {
        printf("(%.1f, %.1f) is in quadrant III\n", x, y); 

    } else if (x > 0 && y < 0) {
        printf("(%.1f, %.1f) is in quadrant IV\n", x, y);

    } else if (x > 0 || x < 0 && y == 0) {
        printf("(%.1f, %.1f) is on the x-axis\n", x, y);

    } else if (x == 0 && y > 0 || y < 0) {
        printf("(%.1f, %.1f) is on the y-axis\n", x, y);
    }
}

void displayInfo(void)
{
    printf("\t     Cartesian calculator\n\n");
    printf("                      y                      \n");
    printf("Quadrant II (-x,y)          Quadrant I (x,y)\n\n\n");
    printf("                                                  x\n\n\n");
    printf("\nQuadrant IV (x,-y)          Quadrant III (-x,-y)\n\n");
}
