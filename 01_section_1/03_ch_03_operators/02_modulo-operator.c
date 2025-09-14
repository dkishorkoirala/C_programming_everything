/*Modulo Operator


The modulo operator % in C gives the remainder of a division. It's used with a simple syntax:

result = dividend % divisor;
dividend: The number being divided.
divisor: The number that divides the dividend.
result: The remainder of the division.
For example:

int result = 10 % 3;
Here, 10 is divided by 3. 3 goes into 10 three times, with a remainder of 1. So, result will be 1.

The modulo operator is often used for checking if a number is even or odd:

If a number is even, dividing it by 2 will leave a remainder of 0.
If a number is odd, dividing it by 2 will leave a remainder of 1.

Challenge

Write a C program that does the following:

Declare an integer variable number and initialize it with the value 17.
Use the modulo operator to calculate the remainder when number is divided by 5, and store the result in a variable called remainder.
Use the modulo operator to determine if number is even or odd (remember booleans)
Print the results using printf() in the following format:
Number: [value of number]
Remainder when divided by 5: [value of remainder]
[number] is even? [1 for even, 0 for odd]
*/

#include <stdio.h>

int main()
{
    int number = 17;
    int remainder = number % 5;
    int isEven = number % 2 == 0;
    printf("Number: %d\n", number);
    printf("Remainder when divided by 5: %d\n", remainder);
    printf("%d is even? %d\n", number, isEven);
    return 0;
}