/*Booleans


In C, there is no built-in boolean data type like in other languages. Instead, C uses integers to represent boolean values.

Define an integer to represent a boolean value:

int isTrue = 1;  // Represents true
int isFalse = 0; // Represents false
In C, any non-zero value is considered "true" while zero is considered "false".

Use these boolean values in conditions:

int age = 25;
int isAdult = (age > 17);

printf("Is adult? %d\n", isAdult);
Output:
Is adult? 1
Starting with C99, you can include the <stdbool.h> header to use the boolean type:

#include <stdbool.h>

bool isTrue = true;   // Now using actual boolean type
bool isFalse = false; // Using predefined constants
But you will learn more about the usage of booleans later throughout your journey


Challenge

Set the age variable to 16. Then, create a program that checks whether the person is old enough to drive (age 18 or older).
Store the result (either 0 for false or 1 for true) in a variable called canDrive, and print both the age and the result.
*/

#include <stdio.h>

int main()
{
    int age = 16;
    int canDrive = (age >= 18);
    printf("Age: %d\n", age);
    printf("Can drive? %d\n", canDrive);
    return 0;
}