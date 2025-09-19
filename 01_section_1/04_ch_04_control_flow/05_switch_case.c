/*Switch Case


The switch statement is a multi-way decision maker that tests whether an expression matches one of several constant integer values, and branches accordingly.

First, define an integer to use with switch:

int day = 3;
Then create a switch statement that evaluates the variable:

switch (day) {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    default:
        printf("Other day\n");
}
In this example:

Each case represents a possible value of day
When day equals 3, "Wednesday" will be printed
The break statement exits the switch
The default case handles all values not explicitly covered
Without break, execution would "fall through" to the next case.

Challenge

Write a program that uses a switch statement to convert a numeric grade to a letter grade as follows:

90-100: 'A'
80-89: 'B'
70-79: 'C'
60-69: 'D'
Below 60: 'F'
Your program should read a numeric grade (0-100) and print the corresponding letter grade. Use integer division by 10 to categorize the grades.

If you struggle, follow the example from the lesson
*/
#include <stdio.h>

int main()
{
    int grade;
    scanf("%d", &grade);

    switch (grade)
    {
    case 90 ... 100:
        printf("A");
        break;
    case 80 ... 89:
        printf("B");
        break;
    case 70 ... 79:
        printf("C");
        break;
    case 60 ... 69:
        printf("D");
        break;
    default:
        printf("F");
    }

    return 0;
}