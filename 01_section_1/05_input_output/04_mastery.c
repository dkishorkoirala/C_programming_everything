/*Challenge

Write a program that asks the user for their personal information:

Declare variables to store an integer age, a float height (in meters), and a character initial
Use scanf() to read these values from the user
Print a summary showing the collected information
Example Input:

25
1.75
M
Expected Output:

Age: 25
Height: 1.75 m
Initial: M
*/

#include <stdio.h>

int main()
{
    int age;
    float height;
    char initial;
    scanf("%d", &age);
    scanf("%f", &height);
    scanf(" %c", &initial);

    printf("Age: %d\n", age);
    printf("Height: %.2f m\n", height);
    printf("Initial: %c\n", initial);
    return 0;
}