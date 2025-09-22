/*Input Validation


When accepting input from users, it's important to verify that the input is valid before using it in your program.

For integer input validation, you can check the return value of scanf:

int number;
int result = scanf("%d", &number);
The scanf function returns the number of items successfully read:

if (result == 1) {
    // Input was successfully read
    printf("Valid input: %d\n", number);
} else {
    // Input was invalid
    printf("Invalid input!\n");
}
For range validation, use conditional statements after reading the input:

if (number >= 1 && number <= 100) {
    printf("Number is within valid range (1-100)\n");
} else {
    printf("Number is outside valid range!\n");
}

Challenge

Write a program that reads an integer from the user and validates it in two ways:

Check if the input is actually an integer (using scanf's return value)
Check if the integer is between 10 and 50 (inclusive)
Your program should print:

"Valid input!" if the input is a valid integer between 10 and 50.
"Invalid input type!" if the input is not an integer.
"Out of range!" if the input is an integer but not between 10 and 50.
*/
#include <stdio.h>

int main()
{
    int number;
    int result = scanf("%d", &number);

    if (number >= 10 && number <= 50)
    {
        printf("Valid input!\n");
    }
    else if (result < 1)
    {
        printf("Invalid input type!\n");
    }
    else
    {
        printf("Out of range!\n");
    }

    return 0;
}