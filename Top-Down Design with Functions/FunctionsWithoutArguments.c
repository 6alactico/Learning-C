
#include <stdio.h>

// Function Prototypes (Function without Arguments)
void draw_circle(void); // Draws a circle
void draw_intersect(void); // Draws intersecting lines
void draw_base(void); // Draws a base line
void draw_triangle(void); // Draws a triangle
void draw_parallel(void); // Draws parallel lines
void draw_rectangle(void); // Draws a rectangle

int main (void) { // Call functions to draw shapes
    draw_triangle(); // Draws a triangle
    draw_rectangle(); // Draws a rectangle

    return(0);
}

// Function Definitions (Functions without Arguments)
void draw_circle(void) {
    printf("  * \n");
    printf("*   *\n");
    printf("  * \n");
}

void draw_intersect(void) {
    printf("  / \\ \n"); // Uses 2 \'s to print 1
    printf(" /   \\ \n");
    printf("/     \\\n");
}

void draw_base(void) {
    printf("-------\n");
}

void draw_parallel(void) { 
    printf("|     |\n");
    printf("|     |\n");
    printf("|     |\n");
}

void draw_triangle(void) { // Calls functions draw_intersect & draw_base to draw a triangle
    draw_intersect();
    draw_base();
}

void draw_rectangle(void) { // Calls functions draw_parallel & draw_base to draw a rectangle
    draw_parallel();
    draw_base();
}