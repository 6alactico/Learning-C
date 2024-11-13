#include <stdio.h>

int main() {
    int m = 25, n = 77;
    char c = '*';
    int *itemp;

    // Corrected statements
    m = n;           // Assign the value of n to m
    itemp = &m;     // Point itemp to the address of m
    
    // Assigning the ASCII value of c to the location pointed to by itemp
    *itemp = (int)c;  // Cast c to int to store its ASCII value in m
    
    // If you want to store the address of c, you need a char pointer
    char *cptr = &c;  // Correctly point to c

    // Output the results
    printf("m: %d\n", m);          // Output the value of m
    printf("n: %d\n", n);          // Output the value of n
    printf("c: %c\n", c);          // Output the value of c
    printf("itemp points to m: %d\n", *itemp); // Value at address pointed to by itemp
    printf("cptr points to c: %c\n", *cptr);   // Value at address pointed to by cptr

    return 0;
}
