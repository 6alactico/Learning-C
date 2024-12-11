#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 10
#define MIN 5

int main()
{
    int rd_num = rand() % (MAX - MIN + 1) + MIN;
    int guess;
    int tries = 5;
    int i;
    int flag = 1;
    
    // Setup log file
    FILE *fptr;
    fptr = fopen("LOG.txt", "w");
    
    // Write basic info to Log FILE
    fprintf(fptr, "%d\n", rd_num);
    fprintf(fptr, "Guesses\n");
    
    while (flag != 0)
    {
        for (int i = 1; i <= tries && guess != rd_num; i++)
        {
            printf("Wanna guess the number? => ");
            scanf("%d", &guess);
            fprintf(fptr, "%d\n", guess);
            
               if (guess < rd_num) {
                printf("Too low!\n");
               } else if (guess > rd_num) {
                printf("Too high!\n");
               } else {
                printf("Hmmmm....");
               }
        }

        if (guess == rd_num)
           printf("Congratulations! It was indeed %d\n", rd_num);
        else
           printf("Sorry! It was %d\n", rd_num);
           
        // Generate new number
        rd_num = rand() % (MAX - MIN + 1) + MIN;
        printf("Try again? Enter 0 to stop. ");
        scanf("%d", &flag);
    }
    
    fclose(fptr);
    printf("Goodbye!");

    return 0;
    
}