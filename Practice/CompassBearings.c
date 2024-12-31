// Create  a program that transforms compass headings in degrees (0 to 360) to compass bearings.
/* North = 0, East = 90, South = 180, West = 270 */

#include <stdio.h>

int main () {
    double heading, angle, bearing;

    while (1) {printf("\nEnter the compass heading in degree (0 to 360): ");
    if (scanf("%lf", &heading) != 1 || heading < 0 || heading > 360){
        printf("\nInvalid compass heading. Please enter a degree between 0 & 360"); 
        while (getchar()!= '\n');
        } else {
            break;
        }
    }

    if (heading >= 0 && heading <= 90) {
        bearing = heading;
        printf("The bearing is North %.1lf degrees East\n", bearing);

    } else if (heading <= 180 && heading >= 90) {
        bearing = heading - 90;
        printf("The bearing is South %.1lf degrees East\n", bearing);

    } else if (heading >= 180 && heading <= 270) {
        bearing = heading - 180;
        printf("The bearing is South %.1lf degrees West\n", bearing);

    } else if (heading <= 360 && heading >= 270) {
        bearing = 360 - heading;
        printf("The bearing is North %.1lf degrees West\n", bearing);
    }

}