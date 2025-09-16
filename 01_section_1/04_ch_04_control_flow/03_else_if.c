/*Else-If


The else-if statement allows you to check multiple conditions in sequence. When the first if condition fails, it moves to check the next else-if condition, and so on.

Start with a basic if statement:

if (grade >= 90) {
    printf("A grade\n");
}
Add an else-if to check another condition:

if (grade >= 90) {
    printf("A grade\n");
} else if (grade >= 80) {
    printf("B grade\n");
} else if (grade >= 70) {
    printf("C grade\n");
}
Finally, you can add an else statement at the end to handle all other cases:

if (grade >= 90) {
    printf("A grade\n");
} else if (grade >= 80) {
    printf("B grade\n");
} else if (grade >= 70) {
    printf("C grade\n");
} else {
    printf("Failed\n");
}
Challenge

Write a program that takes a temperature value and a character ('C' or 'F') indicating the scale. Based on the Celsius temperature, print one of the following messages:

If temperature < 0°C: "Freezing"
If temperature is between 0°C and 20°C: "Cold"
If temperature is between 21°C and 30°C: "Pleasant"
If temperature > 30°C: "Hot"
If the input is in Fahrenheit, convert it to Celsius first using the formula: C = (F - 32) * 5/9.

Print the message exactly as shown above based on the temperature.
*/

#include <stdio.h>
int main()
{
    int temperature;
    char scale;
    scanf("%d", &temperature);
    scanf(" %c", &scale);

    if (scale == 'F')
    {
        temperature = (temperature - 32) * 5 / 9;
    }

    if (temperature < 0)
    {
        printf("Freezing\n");
    }
    else if (0 <= temperature && temperature <= 20)
    {
        printf("Cold\n");
    }
    else if (21 <= temperature && temperature <= 30)
    {
        printf("Pleasant\n");
    }
    else
    {
        printf("Hot\n");
    }
    return 0;
}