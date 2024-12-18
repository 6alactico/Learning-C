// Find the ASCII value of a character
#include <stdio.h>

int main () {
    char c;
    int i = 1;
    FILE *outp;

    outp = fopen("ASCIIValue.txt", "w");

    while (i) {
        printf("Enter a character (or '0' to exit): ");
        scanf(" %c", &c);
        
        if (c == '0') {
            i = 0; // Exit the loop if '0' is entered
        } else {
            printf("ASCII value of %c is %d\n", c, c);
        }

        fprintf(outp, "%c = %d\n", c, c); // Log to file
        fflush(outp); // Ensure data is written
    }

    fclose(outp); // Close the file
    return 0;
}