/*Arithmetic Operators


Arithmetic operators in C are used to perform basic mathematical operations. The most common arithmetic operators are:

+ (addition)
- (subtraction)
* (multiplication)
/ (division)
Here's how you can use these operators:

int a = 10;
int b = 5;
int sum = a + b;       // sum is 15
int difference = a - b; // difference is 5
int product = a * b;   // product is 50
int quotient = a / b;  // quotient is 2
Note that when dividing two integers, the result will be an integer (fractional part is truncated). For example:

int result = 7 / 2;  // result is 3, not 3.5
To get a floating-point result, at least one of the operands should be a float:

float result = 7.0 / 2;  // result is 3.5

Challenge

Write a C program that performs the following operations:

Declare two integer variables num1 and num2 and initialize them with values 15 and 4 respectively.
Calculate and store the sum of num1 and num2 in a variable called sum.
Calculate and store the difference between num1 and num2 in a variable called difference.
Calculate and store the product of num1 and num2 in a variable called product.
Calculate and store the quotient of num1 divided by num2 in a variable called quotient.
Print all results using printf() in the following format:
Sum: [value of sum]
Difference: [value of difference]
Product: [value of product]
Quotient: [value of quotient]
*/

#include <stdio.h>

int main()
{
    int num1 = 15;
    int num2 = 4;

    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    return 0;
}