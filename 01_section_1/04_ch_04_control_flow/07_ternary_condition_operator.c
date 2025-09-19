/*Ternary Conditional Operator


The ternary conditional operator is a shorthand way to express an if-else statement in a single line.

The syntax is:

condition ? value_if_true : value_if_false;
Let's look at an example. First, here's a traditional if-else statement:

int max;
if (a > b) {
    max = a;
} else {
    max = b;
}
Now, let's rewrite it using the ternary operator:

int max = (a > b) ? a : b;
In this example:

a > b is the condition
If the condition is true, a is returned
If the condition is false, b is returned
The ternary operator can also be nested, but this can make code harder to read:

int x = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

Challenge

Create a program that checks if a number is positive, negative, or zero using the conditional operator. The program should:

Take an integer input from the user.
Use the conditional operator to determine if the number is positive, negative, or zero.
Print the result in the format: "The number is [positive/negative/zero]".
*/
#include <stdio.h>

int main()
{
    int number;
    scanf("%d", &number);

    // Write your code below
    char *result = (number > 0) ? "positive" : ((number < 0) ? "negative" : "zero");

    printf("The number is %s\n", result);
    return 0;
}