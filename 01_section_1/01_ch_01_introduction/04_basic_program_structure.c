/*Basic Program Structure


Every C program must start with header directives like:

 #include <stdio.h> // Header for input/output
 #include <math.h> // Header for math functions
These directives include header files containing declarations for functions and objects your program uses.

All executable code must be inside the main() function, which is the entry point of the program. For example:

#include <stdio.h> // Header for input/output

int main() { // Main function
    printf("This is my first C program!"); // Output statement
    return 0; // Return statement - not mandatory in modern C 
}
Remember, every statement ends with a semicolon (;), except for code blocks in curly braces.. The semicolon is mandatory and tells C that you've reached the end of a statement.


Challenge

Create a C program with a main() function. Inside the main() function, write code to output the following text:

This is my first C program!
*/
#include <stdio.h>

int main(){
    printf("This is my first C program!\n");
    return 0;
}