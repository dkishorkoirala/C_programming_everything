/*Challenge

Let's create a program that uses various operators we've learned:

Declare and initialize two integer variables: num1 to 25 and num2 to 7.
Calculate the following values:
The sum of num1 and num2
The difference between num1 and num2
The product of num1 and num2
The quotient when dividing num1 by num2
The remainder when dividing num1 by num2
Print the results in the format:

num1 = 25, num2 = 7
Sum: 32
Difference: 18
Product: 175
Quotient: 3
Remainder: 4
Check if num1 is greater than num2 AND the remainder when dividing num1 by 2 is 1 (i.e., if num1 is odd). Store the result in a variable called result1.
Check if num2 is less than 10 OR num1 is even. Store the result in a variable called result2.
Print the logical operation results in the format:

result1: 1
result2: 1*/

#include <stdio.h>
int main()
{
    int num1 = 25, num2 = 7;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    int quotient = num1 / num2;
    int rem = num1 % num2;

    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %d\n", quotient);
    printf("Remainder: %d\n", rem);

    int result1 = (num1 > num2) && (num1 % 2 == 1);
    printf("result1: %d\n", result1);

    int result2 = (num2 < 10) || (num2 % 2 == 0);
    printf("result2: %d\n", result2);
    return 0;
}
