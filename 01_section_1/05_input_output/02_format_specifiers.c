/*Format Specifiers


The printf() function in C allows for more precise control over the output format using format specifiers. Here are some advanced format specifiers:

%d or %i: Integer
%u: Unsigned integer
%f: Float or double
%e or %E: Scientific notation
%g or %G: Use %f or %e, whichever is shorter
%x or %X: Hexadecimal
%o: Octal
%c: Character
%s: String
%p: Pointer address
You can also control the width and precision of the output:

%5d: Integer with width 5
%7.2f: Float with width 7 and 2 decimal places
%-10s: Left-aligned string with width 10
Example:

printf("%10.2f\n", 3.14159);  // Outputs:      3.14
printf("%.3f\n", 3.14159);   // Outputs: 3.142
printf("%+d\n", 42);         // Outputs: +42
printf("%x\n", 255);         // Outputs: ff

Challenge

Write a C program that demonstrates the use of various format specifiers. Your program should:

Declare an integer num with value 255
Declare a float pi with value 3.14159
Declare a character letter with value 'A'
Print num as a decimal, hexadecimal, and octal number
Print pi with 2 decimal places
Print letter as a character and its ASCII value
Use appropriate format specifiers for each output.
*/
#include <stdio.h>

int main()
{
    int num = 255;
    float pi = 3.14159;
    char letter = 'A';

    printf("Decimal: %d\n", num);
    printf("Hexadecimal: %x\n", num);
    printf("Octal: %o\n", num);

    printf("Pi: %.2f\n", pi);

    printf("Letter: %c\n", letter);
    printf("ASCII value: %d\n", letter);

    return 0;
}