#include <stdio.h>
#define N 10
void max_min(int a[], int n, int *max, int *min); // Function

int main (void)
{
    int b[N], i, big, small; // Function Declarations

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
    scanf("%d", &b[i]);

    /* b is an array of integers, N is the number of elements in b, big and small are ordinary integer variables. When max_min finds b's largest (smallest) 
    * element, it assigns it to *max (*min), storing the value in big (small).
    */

    max_min(b, N, &big, &small); 

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    int i;

    *max = *min = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] > *max)
        *max = a[i];
        else if (a[i] < *min)
        *min = a[i];
    }
}