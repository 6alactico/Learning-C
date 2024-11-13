// Write an interactive program that contains an if statement that may be used to compute the area of a square (area = side * side) or a circle (area = PI * (radius * radius)) after prompting the user to type the first character of the figure name (S or C).

#include <stdio.h>
#define PI 3.14159

int main () {

    char figure_name;
    double area, side, radius;

    printf("Type the first character of the figure name (S or C): ");
    scanf("%c", &figure_name);


    if (figure_name == 'S') {
        printf("What is the side of the square? ");
        scanf("%lf", &side);
        area = side * side;
        printf("The area of the square is %.1f\n", area);
    }
    else {
    printf("What is the radius of the circle? ");
    scanf("%lf", &radius);
    area = PI * (radius * radius);
    printf("The area of the circle is %.1f\n", area);
    }
}