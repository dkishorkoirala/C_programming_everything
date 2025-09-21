/*Recap Challenge #1
Challenge

Create a C program that:

Reads name, age, and height in meters using scanf()
Calculates the user's age in days (assume exactly 365 days per year)
Prints a formatted summary with the following information:
User's name
User's age in years and days
User's height with exactly 2 decimal places
User's height in centimeters (as an integer)
Your output should follow this exact format:

Name: [name]
Age: [years] years ([days] days)
Height: [height] m ([height_cm] cm)
*/
#include <stdio.h>

int main()
{
    char name[20];
    scanf("%s", &name);

    int age;
    scanf("%d", &age);

    float height;
    scanf("%f", &height);

    int days = age * 365;
    int height_cm = height * 100;

    printf("Name: %s\n", name);
    printf("Age: %d years (%d days)\n", age, days);
    printf("Height: %.2f m (%d cm)\n", height, height_cm);
    return 0;
}
