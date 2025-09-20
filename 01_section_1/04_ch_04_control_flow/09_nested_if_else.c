/*Nested If - Else


We can nest if-else statements within each other. This allows us to create hierarchical decision-making structures.

For example:

if (age > 18) {
    if (hasLicense) {
        printf("You can drive");
    } else {
        printf("Get a license first");
    }
} else {
    printf("Too young to drive");
}
It can be infinitely nested:

if (condition1) {
    if (condition2) {
        if (condition3) {
            // if condition1, condition2 and condition3 are true
        }
    }
}

Challenge

Create a program that checks if someone can ride a rollercoaster. The requirements are:

Must be at least 12 years old
Must be taller than 150cm
If they meet both requirements but are under 15, they need adult supervision
Print exactly these messages for each case:

If too young: Sorry, you are too young
If not tall enough: Sorry, you are not tall enough
If under 15 and no adult: Sorry, you need an adult with you
If under 15 with adult: You can ride with adult supervision!
If 15 or older and tall enough: You can ride by yourself!
*/
#include <stdio.h>

int main()
{
    int age, height;
    int hasAdult;
    scanf("%d %d %d", &age, &height, &hasAdult); // Don't change this line

    if (age < 12)
    {
        printf("Sorry, you are too young");
    }
    else if (height <= 150)
    {
        printf("Sorry, you are not tall enough");
    }
    else if (age < 15)
    {
        if (hasAdult == 0)
        {
            printf("Sorry, you need an adult with you");
        }
        else
        {
            printf("You can ride with adult supervision!");
        }
    }
    else
    {
        printf("You can ride by yourself!");
    }

    return 0;
}