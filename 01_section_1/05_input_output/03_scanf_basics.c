/*scanf Basics


In C, the scanf() function is used to read formatted input from the user. It's part of the standard input/output library <stdio.h>.

The basic syntax of scanf() is:

scanf("format string", &variable1, &variable2, ...);
The format string contains format specifiers that match the types of variables you're reading. Common format specifiers include:

%d for integers
%f for floats
%lf for doubles
%c for characters
%s for strings
Note the use of the ampersand (&) before variable names. This is because scanf() needs the memory address of the variable to store the input.

Example:

int age;
scanf("%d", &age);
This will prompt the user to enter their age, and the entered value will be stored in the age variable.

Challenge

Write a C program that does the following:

Declare an integer variable num1 and a float variable num2.
Use scanf() to read an integer value into num1 and a float value into num2 from the user.
Calculate the sum of num1 and num2 and store it in a variable called sum.
Print the values of num1, num2, and sum using printf().
Use appropriate format specifiers for input and output.
*/
#include <stdio.h>

int main()
{
    int num1;
    float num2;
    scanf("%d", &num1);
    scanf("%f", &num2);

    float sum = num1 + num2;

    printf("num1 = %d\n", num1);
    printf("num2 = %.2f\n", num2);
    printf("sum = %.2f\n", sum);
    return 0;
}