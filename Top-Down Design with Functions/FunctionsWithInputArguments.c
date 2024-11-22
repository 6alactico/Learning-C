#include <stdio.h>
// void Functions with Input Arguments

// Function Prototype
void sum(int a, int b);

void sum(int a, int b) {

    printf("The sum is: %d", a + b);
}

int main () {

    int x = 10;
    int y = 3;
    sum(x, y); // Calls sum with the values of x and y

    return (0);

}
main ()
