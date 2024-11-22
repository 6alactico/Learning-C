/* Computes the mean and standard deviation of an array of data and displays the difference between each value and the mean. */

#include <stdio.h>
#include <math.h>
#define MAX_ITEM 8 // Maximum number of items in list of data

int main (void) {

    double x[MAX_ITEM], // Data List
            mean, // Mean (average) of the data
            st_dev, // Standard deviation of the data
            sum, // Sum of the data
            sum_sqr; // Sum of the squares of the data
    int i;

    // Gets the data
    printf("Enter %d numbers separated by blanks or <return>s\n> ", MAX_ITEM);
    for (i = 0; i < MAX_ITEM; ++i)
    scanf("%lf", &x[i]);

    // Computes the sum and the sum of the squares of all data
    sum = 0;
    sum_sqr = 0;
    for (i = 0; i < MAX_ITEM; ++i) {
        sum += x[i];
        sum_sqr += x[i] * x[i];
    }

    // Computes and prints the mean and standard deviation
    mean = sum / MAX_ITEM;
    printf("The mean is %.2f.\n", mean);
    st_dev = sqrt(sum_sqr / MAX_ITEM - mean * mean);
    printf("The standard deviation is %.2f.\n", st_dev);

    // Displays the difference bewteen each item and the mean
    printf("\nTable of differences between data values and mean\n");
    printf("Index      Item      Difference\n");
    for (i = 0; i < MAX_ITEM; ++i)
        printf("%3d%4c%9.2f%5c%9.2f\n", i, ' ', x[i], ' ', x[i] - mean);

        return(0);
}