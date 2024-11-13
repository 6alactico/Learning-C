/* The global scope refers to the region outside any block or function. The * variables declared in the global scope are called global variables. Global * variables are visible in every part of the program. Global is also called * File Scope as the scope of an identifier starts at the beginning of the  
* file and ends at the end of the file.
*/

#include <stdio.h>
/* global variable declaration */
int g;
 
int main () {

  /* local variable declaration */
  int a, b;
 
  /* actual initialization */
  a = 10;
  b = 20;
  g = a + b;
 
  printf ("value of a = %d, b = %d and g = %d\n", a, b, g);
 
  return 0;
}