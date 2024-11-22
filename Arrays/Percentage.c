#include <stdio.h>

int main () {
    int n[10] = {8, 12, 18, 25, 24, 30, 28, 22, 23, 10};
    int i;
    float sum = 0, percentage;

    for (i = 0; i < 10; ++i) {
    sum = sum + n[i];
    }

    printf("\nn         percentage of total\n\n");
    for (i = 0; i < 10; i++) {
        percentage = (n[i] / sum) * 100;
        printf("%d%10c%.2f\n", n[i], ' ', percentage);

    }

}