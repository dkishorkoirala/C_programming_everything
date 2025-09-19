/*Recap Challenge


Challenge

Create a program that analyzes a student's numerical score and provides feedback using multiple control flow techniques.

Your program should implement the following logic:

If the score is invalid (less than 0 or greater than 100), print "Invalid score" and exit.
Use a switch statement to print the letter grade:
90-100: "A"
80-89: "B"
70-79: "C"
60-69: "D"
0-59: “F”
Finally, use the ternary operator to print whether the student passed or failed (passing is 60 or above).
*/

#include <stdio.h>
#include <string.h>

int main()
{
    int score;
    scanf("%d", &score);
    int validity = (score < 0 || score > 100) ? 0 : 1;
    if (validity == 0)
    {
        printf("Invalid score\n");
    }
    else
    {
        switch (score / 10)
        {
        case 10:
        case 9:
            printf("A\n");
            printf("Status: Passed\n");
            break;
        case 8:
            printf("B\n");
            printf("Status: Passed\n");
            break;
        case 7:
            printf("C\n");
            printf("Status: Passed\n");
            break;
        case 6:
            printf("D\n");
            printf("Status: Passed\n");
            break;
        default:
            printf("F\n");
            printf("Status: Failed\n");
        }
    }
}