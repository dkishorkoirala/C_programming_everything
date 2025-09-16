/*If - Else


The if-else statement allows your program to make decisions based on conditions. If a condition is true, one block of code executes; otherwise, a different block executes.

Let's see how to use an if-else statement:

First, we define a variable:

int age = 17;
Now let's check if the person is an adult:

if (age >= 18) {
    printf("You are an adult.\n");
} else {
    printf("You are a minor.\n");
}
Since age is 17, which is less than 18, the output will be:

You are a minor.
The if part checks the condition. When the condition is false, the code in the else block executes.

Challenge

Write a program that:

Reads an integer representing a student's score from the user
If the score is greater than or equal to 60, prints "Pass"
Otherwise, prints "Fail"
*/

#include <stdio.h>

int main()
{
    int score;
    scanf("%d", &score);
    if (score >= 60)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }
    return 0;
}