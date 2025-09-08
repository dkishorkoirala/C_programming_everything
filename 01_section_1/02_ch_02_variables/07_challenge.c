/*Challenge
Create a program that determines whether a person is eligible for a discount.

Define an age variable and set it to 65
Define an isMember variable and set it to 0 (false)
Create a boolean expression called isEligible that evaluates to true if either:
The person is a senior (age 65 or older), OR
The person is a member
Print the result of whether the person is eligible for a discount
*/

#include <stdio.h>

int main()
{
    int age = 65;
    int isMember = 0;
    int isEligible = (age >= 65 || isMember == 1);
    printf("Eligible for discount? %d\n", isEligible);

    return 0;
}