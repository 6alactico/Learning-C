// Given a function, find the area underneath it between points a and b

#include <stdio.h>
#include <math.h>

// Function Prototypes
double f(double x);
double calculate_h(double a, double b, int n); // Calculate rectangle's width
double trap(double h, double a, double b, int n); // Sum of the areas of trapezoids

int main()
{
    double a, b, h;
    double ans;
    int n;
 
    printf("Please enter a: ");
    scanf("%lf", &a);
    printf("Please enter b: ");
    scanf("%lf", &b);
    printf("Please enter n: ");
    scanf("%d", &n);
    
    h = calculate_h(a, b, n); // Rectangle's width
    
    printf("\nArea is approximately %.4lf", trap(h, a, b, n));

    return (0);
}

// Function Definitions
double f(double x)
{
    return x * x * sin(x);
}

double calculate_h(double a, double b, int n)
{
    return ((b - a) / (n));
}

double trap(double h, double a, double b, int n)
{
    int i = 1;
    double x = a + h;
    double sum = 0;
    
    while (i <= n - 1)
    {
        sum += f(x);
        x += h;
        i++;
    }
    
    return ((h / 2.0) * (f(a) + f(b) + 2.0 * sum));
}