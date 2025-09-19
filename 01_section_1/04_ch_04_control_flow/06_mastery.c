/*Challenge

Create a program that takes a month number (1 for January, 2 for February, etc.) and prints the season it belongs to. Use a switch statement for the logic.

The seasons and their corresponding months are:

Winter: December (12), January (1), February (2)
Spring: March (3), April (4), May (5)
Summer: June (6), July (7), August (8)
Autumn: September (9), October (10), November (11)
Invalid month: for other options
*/

#include <stdio.h>
int main()
{
    int month;
    scanf("%d", &month);
    char *season = "";

    switch (month)
    {
    case 12:
    case 1:
    case 2:
        season = "Winter";
        break;
    case 3:
    case 4:
    case 5:
        season = "Spring";
        break;
    case 6:
    case 7:
    case 8:
        season = "Summer";
        break;
    case 9:
    case 10:
    case 11:
        season = "Autumn";
        break;
    default:
        season = "Invalid month";
    }

    printf("%s\n", season);
    return 0;
}