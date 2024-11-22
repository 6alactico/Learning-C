#include <stdio.h>
#define NUM_STUDENTS 2

int main (void) {

    int id[NUM_STUDENTS];
    double gpa[NUM_STUDENTS];
    int i;

    for(i = 0; i < NUM_STUDENTS; ++i) {
        printf("Enter the id and gpa for student %d: ", i);
        scanf("%d%lf", &id[i], &gpa[i]);
        printf("%d %4.2f\n", id[i], gpa[i]);
    }

    return(0);

}