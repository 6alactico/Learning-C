// C Program to demonstrate the file pointer 
#include <stdio.h> 
  
int main() 
{ 
    // Declaring file pointer 
    // FILE is the typedef name of the predefined file pointer structure and ptr is a pointer variable of type FILE.
    FILE* fptr; 
  
    // Get the size of FILE datatype. 
    printf("Size of FILE Structure: %lu bytes", 
           sizeof(FILE)); 
  
    return 0; 
}