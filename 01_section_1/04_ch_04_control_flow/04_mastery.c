/*Challenge

Write a program that classifies a person based on their age:

If age is less than 13: "Child"
If age is between 13 and 19: "Teenager"
If age is between 20 and 64: "Adult"
If age is 65 or older: "Senior"
Read an integer value from standard input and print the corresponding classification exactly as shown above.
*/

#include <stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if (age < 13)
    {
        printf("Child");
    }
    else if (age < 20)
    {
        printf("Teenager");
    }
    else if (age < 65)
    {
        printf("Adult");
    }
    else
    {
        printf("Senior");
    }
    return 0;
}