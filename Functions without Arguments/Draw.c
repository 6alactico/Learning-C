// Write a function draw_parallel that draws parallel lines and a function draw_rectangle that uses draw_parallel and draw_base to draw a rectangle.
#include <stdio.h>

// Function Prototypes
void draw_parallel (void); // Draws parallel lines
void draw_rectangle (void); // Draws a rectangle
void draw_base (void); // Draws a rectangle

int main (void) {
    draw_parallel (); 
    draw_rectangle ();
    draw_base ();

    return(0);
}

void draw_parallel (void) {
    printf("| |\n");
}
void draw_base (void) {
    printf("_\n");
}
void draw_rectangle (void) {

    draw_parallel ();
    draw_base ();
}