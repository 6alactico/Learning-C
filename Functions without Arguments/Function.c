#include <stdio.h>

int myFunction(int x, int y);

int main () {

    int x;
    int y;
    
    // Input
    printf("Enter the first number> ");
    scanf("%d", &x);
    printf("Enter the first number> ");
    scanf("%d", &y);

    // Output
    
    printf("Sum is %d\n", myFunction(x, y));

return 0;

}

int myFunction(int x, int y) {

    return x * y;
}