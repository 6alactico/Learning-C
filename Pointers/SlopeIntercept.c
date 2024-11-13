#include <stdio.h>
#include <math.h>

// Function prototypes

// Displays the user menu, then inputs and returns as the function value the problem number selected.
int get_problem(void);

// Prompts the user for the x-y coordinates of both points, inputs the four coordinates, and returns them to the calling function through output parameters.
float get2_pt(float *x1, float *y1, float *x2, float *y2);

// Prompts the user for the slope and x-y coordinates of the point, inputs the three values and returns them to the calling function through output parameters.
float get_pt_slope(float *m, float *x, float *y);

// Takes four input parameters, the x-y coordinates of two points, and returns through output parameters the slope (m) and y-intercept (b).
float slope_intcpt_from2_pt(float *m, float *b);

// Takes three input parameters, the x-y coordinates of one point and the slope, and returns as the function value the y-intercept.
void intcpt_from_pt_slope(float *m, float *b);

// Takes four input parameters, the x-y coordinates of two points, and displays the two-point line equation with a heading.
void display2_pt(float x1, float y1, float x2, float y2);

// Takes three input parameters, the x-y coordinates of one point and the slope, and displays the point-slope line equation with a heading
void display_pt_slope (float m, float x, float y);

// Takes two input parameters, the slope and y-intercept, and displays the slope-intercept line equation with a heading.
void display_slope_intcpt (float m, float b);

int main () {

    // Loop for choice input
    float m, x1, y1, x2, y2, b;
    int problem = 1;

        switch(problem){
            case 1:
            get2_pt(&x1, &y1, &x2, &y2);
            slope_intcpt_from2_pt(&m, &b);
            break;

            case 2:
            printf("Enter the slope=> ");
            printf("Enter the slope=> ");
            break;
            
        }
    }
 
}

int get_problem(void) {

    int problem;

    printf("Select the form that you would like to convert to slope-intercept form: \n");
    printf("1) Two-point form (you know two points on the line\n");
    printf("2) Point-slope form (you know the line's slope and one point)");
    printf("=> ");
    scanf("%d", &problem);

    return (problem);
}

// Function Definitions

float get2_pt(float *x1, float *y1, float *x2, float *y2) {
    printf("Enter the x-y coordinates of the first point separated by a space=> ");
    scanf("%f%f", x1, y1);
    printf("Enter the x-y coordinates of the second point separated by a space=> ");
    scanf("%f%f", x2, y2); 
}

float get_pt_slope(float *m, float *x, float *y) {
    printf("Enter the slope=> ");
    scanf("%f", m);
    printf("Enter the x-y coordinates of the point separated by a space=> ");
    scanf("%f%f", x, y);
}

float slope_intcpt_from2_pt(float * m, float * b)
{
return (0.0f);
}
float display2_pt(float x1, float y1, float x2, float y2) {

}