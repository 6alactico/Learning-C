/* The local scope refers to the region inside a block or a function. It is * the space enclosed between the { } braces.
* The variables declared within the local scope are called local variables.
* Local variables are visible in the block they are declared in and other 
* blocks nested inside that block.
* Local scope is also called Block scope.
* Local variables have no linkage.
*/
#include <stdio.h>
 
int main () {

  /* local variable declaration */
  int a, b;
  int c;
 
  /* actual initialization */
  a = 10;
  b = 20;
  c = a + b;
 
  printf ("value of a = %d, b = %d and c = %d\n", a, b, c);
 
  return 0;
}