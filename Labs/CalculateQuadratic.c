/* Create a program that calculates the roots of a quadratic equation of the form ax^2 + bx + c = 0. The program should check the discriminant first to ensure that real roots exist. */

#include <stdio.h>
#include <math.h>

// Function Prototypes
double calculateDiscriminant(double a, double b, double c); // Calculates and returns discriminant
void findRoots(double a, double b, double discriminant); // Calculates and displays roots if discriminant is non-negative

int main()
{
    // Variables
    double a, b, c, disc;
    
    // Input
    printf("Enter a, b, and c seperated by spaces: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    
    disc = calculateDiscriminant(a, b, c);
    findRoots(a, b, disc);
    return 0;
}

// Function Definitions
double calculateDiscriminant(double a, double b, double c)
{
    return b * b - 4 * a * c;
}

void findRoots(double a, double b, double discriminant)
{
    printf("Discriminant = %.2lf\n", discriminant);
    if (discriminant > 0.0)
    {
        printf("There are two roots: %.2lf and %.2lf\n",
        (-b + sqrt(discriminant))/(2 * a), (-b - sqrt(discriminant)) / (2 * a));
    }
    else if (discriminant < 0.0)
        printf("There are no real roots\n");
    else 
    {
        printf("There is one root: %.2lf\n", -b / (2 * a));
    }

}