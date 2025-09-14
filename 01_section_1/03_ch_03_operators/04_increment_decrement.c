/*Increment/Decrement


In C, increment (++) and decrement (--) operators allow you to increase or decrease the value of a variable by 1.

Let's use an integer variable:

int counter = 5;
To increment by 1, use the ++ operator:

counter++;  // Increases counter to 6
To decrement by 1, use the -- operator:

counter--;  // Decreases counter to 5
These operators can be used in two ways:

Prefix form (++counter or --counter):
int a = 5;
int b = ++a;  // a is incremented to 6, then b is assigned 6
Postfix form (counter++ or counter--):
int x = 5;
int y = x++;  // y is assigned 5, then x is incremented to 6
The difference is when the increment happens relative to the assignment.

Challenge

Create a program that:

Declares an integer variable called number with an initial value of 10
Uses the prefix increment operator to increase number by 1 and assigns the result to a variable called prefixResult
Uses the postfix increment operator on number and assigns the result to a variable called postfixResult
Prints the final value of number, prefixResult, and postfixResult in this exact format:
Number: [value]
Prefix result: [value]
Postfix result: [value]
*/
#include <stdio.h>

int main()
{
    int number = 10;
    int prefixResult = ++number;
    int postfixResult = number++;

    printf("Number: %d\n", number);
    printf("Prefix result: %d\n", prefixResult);
    printf("Postfix result: %d\n", postfixResult);
    return 0;
}