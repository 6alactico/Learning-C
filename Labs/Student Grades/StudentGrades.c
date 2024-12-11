// Create a program to manage student grades using parallel arrays, demonstrating your master of using parallel arrays and working with arrays.

#include <stdio.h>
#include <math.h>
#define MAX_STUDENTS 10 // Maximum number of students the program can handle

// Function prototypes
int readData(FILE *input, int ID[], double Grade[]); // Stores IDs and grades into arrays
void displayData(int count, int ID[], double Grade[]); // Displays IDs and grades
double calculateAvg(int max, double Grade[]); // Calculates the average grade

int main () {

    int ID[MAX_STUDENTS]; // Store IDs
    double Grade[MAX_STUDENTS]; // Store grades
    int count; // Tracks number of students read from the file
    double average; // Calculated average


    FILE *input; // Pointer to input file
    input = fopen("studentdata.txt", "r"); // Opens file
    count = readData(input, ID, Grade);
    displayData(count, ID, Grade);
    average = calculateAvg(count, Grade);

    printf("\nThe average grade of the class is %.2f\n", average); // Displays average grade results

    fclose(input); // Closes file
    return 0;
}

int readData(FILE *input, int ID[], double Grade[]) {

    int count = 0;
    while (fscanf(input, "%d", &ID[count]) != EOF && count < MAX_STUDENTS) {
    
    fscanf(input, "%lf", &Grade[count]);
    count++;
   }
   return count;
}

void displayData(int count, int ID[], double Grade[]) {

    // Display data from file
    printf("ID\t Grade\n");
    for (int i = 0; i < count; i++) {
        printf("%d\t %.2lf\n", ID[i], Grade[i]);
    }
}

double calculateAvg(int max, double Grade[]) {
    
    double sum = 0; // Sum of grades
    for (int i = 0; i < max; i++) {
        sum += Grade[i];
    }

    return sum / max; // Returns average
}