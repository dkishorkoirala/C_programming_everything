/*Type Casting Part 2


In Part 1, we looked at implicit type casting. Now, let's explore explicit type casting in C.

Explicit type casting (manual conversion) is when you forcefully convert one data type to another using the cast operator.

The syntax for explicit casting is:

(target_type) expression
Let's convert a float to an integer:

float price = 45.95;
int rounded_price = (int) price;
After executing the above code, rounded_price will be:

45

Notice that the decimal part is truncated (not rounded).

We can also cast characters to integers to get their ASCII values:

char letter = 'A';
int ascii_value = (int) letter;
After executing the above code, ascii_value will be:

65

Remember, type casting can lead to data loss, especially when converting from a larger data type to a smaller one.


Challenge

Write a program that:

Declares a double variable named temperature and assigns it a value of 98.6.
Uses explicit type casting to convert temperature to an integer and stores it in a variable named whole_part.
Prints the original temperature and the whole part on separate lines.
Example output:

Original temperature: 98.6 Whole part: 98
*/
#include <stdio.h>

int main()
{
    double temperature = 98.6;
    int whole_part = (int)temperature;
    printf("Original temperature: %.1f\n", temperature);
    printf("Whole part: %d", whole_part);
    return 0;
}