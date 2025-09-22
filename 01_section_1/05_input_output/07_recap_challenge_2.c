/*Recap Challenge #2
Challenge

Create a program that reads a person's weight (in kg) and height (in meters), then:

Validates that both inputs are valid numbers using scanf's return value
Validates that weight is between 30 and 300 kg
Validates that height is between 1.0 and 2.5 meters
If all validations pass, calculates and prints the BMI (Body Mass Index) with 1 decimal place
BMI formula: weight / (height * height)
Prints the person's weight category based on BMI:
Below 18.5: "Underweight"
18.5 to 24.9: "Normal weight"
25.0 to 29.9: "Overweight"
30.0 or higher: "Obese"

For invalid input, print specific error messages:

If input is not a number: "Invalid input type!"
If weight is out of range: "Weight out of range!"
If height is out of range: "Height out of range!"
Example output format for valid input:

BMI: 24.8
Category: Normal weight
*/
#include <stdio.h>

int main()
{
    float weight, height;
    float resultW = scanf("%f", &weight);
    if (resultW != 1)
    {
        printf("Invalid input type!\n");
        return 1;
    }

    // Read height
    float resultH = scanf("%f", &height);
    if (resultH != 1)
    {
        printf("Invalid input type!\n");
        return 1;
    }

    // Validate weight range
    if (weight < 30 || weight > 300)
    {
        printf("Weight out of range!\n");
        return 1;
    }

    // Validate height range
    if (height < 1.0 || height > 2.5)
    {
        printf("Height out of range!\n");
        return 1;
    }

    float bmi = weight / (height * height);
    printf("BMI: %.1f\n", bmi);
    if (bmi < 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if (bmi < 25)
    {
        printf("Category: Normal weight\n");
    }
    else if (bmi < 30)
    {
        printf("Category: Overweight\n");
    }
    else
    {
        printf("Category: Obese\n");
    }

    return 0;
}