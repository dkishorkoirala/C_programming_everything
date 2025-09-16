/*If Statement


The if statement is a fundamental control flow structure in C that allows your program to make decisions.

An if statement executes a block of code only if a specified condition is true.

Basic syntax of an if statement:

if (condition) {
    // Code to execute if condition is true
}
Let's look at a simple example:

int age = 20;

if (age >= 18) {
    printf("You are an adult.\n");
}
In this example:

We check if the value in age is greater than or equal to 18
If this condition is true, the message "You are an adult." is printed
If the condition is false, the program skips the code block and continues with the next statement

Challenge

You are writing a simple program to check the weather condition based on a preset temperature value.

Here’s the task:

Create an int variable called temperature and set it to any value you like (for example, 35).
Use if statements to print messages based on the value of temperature:
If the temperature is above 30, print "It's a hot day!"
If the temperature is between 20 and 30 (inclusive), print "The weather is nice."
If the temperature is below 20, print "It's a bit cold today."
*/

#include <stdio.h>

int main()
{
    int temperature;
    scanf("%d", &temperature);

    if (temperature > 30)
    {
        printf("It's a hot day!\n");
    }
    else if (20 <= temperature && temperature <= 30)
    {
        printf("The weather is nice.\n");
    }
    else
    {
        printf("It's a bit cold today.\n");
    }
}