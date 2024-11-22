/* Write a program to store an input list of ten integers in an array; then display a table, showing each data value and what percentage each value is of the total of all ten values. */
#include <stdio.h>

int main () {
    int n[10] = {8, 12, 18, 25, 24, 30, 28, 22, 23, 10};
    int i;
    float sum = 0, percentage;

    for (i = 0; i < 10; ++i) {
    sum = sum + n[i];
    }

    printf("\n     n      percentage of total\n");
    printf("---------------------------------");
    for (i = 0; i < 10; ++i) {
        percentage = (n[i] / sum) * 100;
        printf("\n %c %3d %10c %.2f\n",  ' ', n[i], ' ', percentage);

    }

}