#include <stdio.h>

int readData(FILE * input, int id[], int aMonth[], int aYear[], 
    int rMonth[], int rYear[]);
float calculateRec(int max, int aMonth[], int aYear[], int rMonth[], 
    int rYear[]);

#define MAX_SIZE 20

int main()
{
    int count;
    float rec;
    int id[MAX_SIZE], aMonth[MAX_SIZE], aYear[MAX_SIZE], rMonth[MAX_SIZE], 
    rYear[MAX_SIZE];
        
    FILE * input;
    input = fopen("data.txt","r");
    count = readData(input, id, aMonth, aYear, rMonth, rYear);
    rec = calculateRec(count, aMonth, aYear, rMonth, rYear);
    
    // Display data
    printf("ID\t\tAM\tAY\tRMh\tRY\n");
    for (int i = 0; i < count; i++)
    {
        printf("%d\t\t%d\t%d\t%d\t%d\n", id[i], aMonth[i], aYear[i],
            rMonth[i], rYear[i]);
    }
    printf("Recidivism rate: %0.1f", rec);

    fclose(input);
    return 0;
}

int readData(FILE * input, int id[], int aMonth[], int aYear[], 
    int rMonth[], int rYear[])
{
    int count = 0;
    while (fscanf(input, "%d,", &id[count]) != EOF && count < MAX_SIZE - 1)
    {
        fscanf(input, "%d,", &aMonth[count]);
        fscanf(input, "%d,", &aYear[count]);
        fscanf(input, "%d,", &rMonth[count]);
        fscanf(input, "%d\n", &rYear[count]);
        count++;
    }
    return count;
}

float calculateRec(int max, int aMonth[], int aYear[], int rMonth[], 
    int rYear[])
{
    int count = 0;
    float recRate;
    for (int i = 0; i < max; i++)
    {
        if (rYear[i] > 0)
        {
            count++;
        }
    }
    recRate = (float) count / (float) max * 100;
    return recRate;
}
