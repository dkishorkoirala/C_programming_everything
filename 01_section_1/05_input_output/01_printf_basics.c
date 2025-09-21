/*printf Basics


In C, the printf() function is used to print formatted output to the console. It's part of the standard input/output library <stdio.h>.

The basic syntax of printf() is:

printf("format string", argument1, argument2, ...);
The format string can contain:

Plain text, which is printed as-is
Format specifiers, which start with % and are replaced by the values of the arguments
Here are some common format specifiers:

%d for integers
%f for floating-point numbers
%c for characters
%s for strings
Example:

int age = 25;
printf("I am %d years old.\n", age);
This will output: I am 25 years old.

The \n at the end of the string is a newline character, which moves the cursor to the next line after printing.

Challenge

Write a C program that does the following:

Declare an integer variable year and initialize it with the value 2023.
Declare a float variable pi and initialize it with the value 3.14159.
Use printf() to print these values in the following format:
The current year is 2023
The value of pi is 3.14159
Make sure to use appropriate format specifiers for each variable type.
*/
#include <stdio.h>

int main()
{
    int year = 2023;
    float pi = 3.14159;

    printf("The current year is %d\n", year);
    printf("The value of pi is %f\n", pi);
    return 0;
}