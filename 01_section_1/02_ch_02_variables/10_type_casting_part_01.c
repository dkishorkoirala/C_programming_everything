/*Type Casting Part 1


Type casting in C allows you to convert a value from one data type to another. This is useful when you need to perform operations between different data types.

There are two main types of type casting:

Implicit casting (automatic)
Explicit casting (manual)
Let's start with implicit casting:

Implicit casting happens automatically when converting from a smaller data type to a larger one:

int num = 10;
double decimal_num;

// Implicit casting from int to double
decimal_num = num;
After executing the above code, decimal_num will have the value 10.0

This works because a double can store all possible values of an int without losing any data. The conversion is safe, so C does it automatically.

Common implicit casting paths:

char → int → long → float → double

Challenge

Write a program that:

Declares a double variable resultand sets it to 5.65
Declares a int variable grade
Assigns the value of result to grade using implicit casting
Prints the value of grade with the message "The grade is: " using printf
*/

#include <stdio.h>
int main()
{
    double result = 5.65;
    int grade;

    grade = result;

    printf("The grade is: %d", grade);

    return 0;
}