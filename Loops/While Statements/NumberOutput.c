#include <stdio.h>
#include <math.h> // Inlcude math library
int main () {
    int i = 0;
    while (i <= 6) { // Iterates from 0 to 6
        printf("%d %d\n", i, (int)pow(2, i)); // Calculate 2^1 for each value of i
        i = i + 1;
    }
}