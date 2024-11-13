// Trace the execution of the following fragment.
#include <stdio.h>

int main() {
    // Variables
    int m = 10, n = 5;
    // Pointer Type Declaration
    int *mp, *np; // A pointer to an integer
    
    mp = &m; // Store address of m in pointer mp
    np = &n; // Store address of n in pointer np
    
    *mp = *mp + *np;  // m = 15 
    *np = *mp - *np;  // n = 10
    
    printf("%d %d\n%d %d\n", m, *mp, n, *np); // Displays new value of m (15) and n (10)
    
    return 0;
}
