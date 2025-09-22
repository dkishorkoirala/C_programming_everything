/*Challenge

Create a program that uses a for loop to print the multiplication table of a number n up to 5 times.

Your program should:

Take an integer n as input
Use a for loop to calculate and print n × 1, n × 2, n × 3, n × 4, and n × 5
Each result should be printed on a new line in the format: "n x i = result"
Example output for n = 3:

3 x 1 = 3
3 x 2 = 6
3 x 3 = 9
3 x 4 = 12
3 x 5 = 15
*/
#include <stdio.h>

int main()
{
    // Write your code here
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= 5; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
    return 0;
}