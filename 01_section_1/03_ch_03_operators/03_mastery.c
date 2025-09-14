/*Challenge

Write a program that:

Takes two integers as input from the user
Calculates and prints:
The remainder when the first number is divided by the second
Whether the sum of the two numbers is even or odd
Whether the first number is divisible by the second (no remainder)
Example Input:

17
5
Expected Output:

Remainder: 2
Sum is odd: 1
First is divisible by second: 0
*/
#include <stdio.h>

int main()
{
    int first, second;
    scanf("%d", &first);
    scanf("%d", &second);

    int remainder = first % second;
    int sum = first + second;
    int divisible = first % second == 0;
    printf("Remainder: %d\n", remainder);
    printf("Sum is odd: %d\n", sum % 2 == 1);
    printf("First is divisible by second: %d\n", divisible);
    return 0;
}