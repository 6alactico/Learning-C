/* Given the Richter number, display its characterization. */

#include <stdio.h>

int main()
{
    double n = 0.0;
    
    printf("RICHTER NUMBER CHARACTERIZATION\n");
    printf("===================================\n");
    printf("Please enter the Richter number -> "); // Get user input for richter number
    scanf("%lf", &n);
    
    if (n < 5.0)
        printf("Little or no damage\n");
   
    else if (n < 5.5)
        printf("Some damage\n");

    else if (n < 6.5)
        printf("Serious damage: walls may crack or fall\n");
 
    else if (n < 7.5)
        printf("Disaster: houses and buildings may collapse\n");
  
    else
        printf("Catastrophe: most buildings destroyed\n");
    
    return 0;
}