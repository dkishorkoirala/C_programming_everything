/*Constants


Constants in C are variables whose values cannot be changed during program execution. They are useful for values that should remain fixed throughout your program.

Define a constant using the #define directive:

#define PI 3.14159
The above line creates a constant named PI with the value 3.14159.
Another way to create constants is by using the const keyword:

const float TAX_RATE = 0.07;
This creates a constant named TAX_RATE with the value 0.07.
Use constants in your program like regular variables:

float area = PI * radius * radius;
float tax = price * TAX_RATE;
Constants make your code more readable and easier to maintain. If you need to change a value used in multiple places, you only need to update it once.

Challenge

Create a program that calculates the area of a circle. Your program should:

Define a constant PI with the value 3.14159
Calculate the area of the circle using the formula: area = PI * radius * radius
Print the calculated area with exactly 2 decimal places in the format: "Area: X.XX"
*/

#include <stdio.h>

int main()
{
    const float PI = 3.14159;
    int radius = 5;
    float area = PI * radius * radius;
    printf("Area: %.2f", area);
    return 0;
}