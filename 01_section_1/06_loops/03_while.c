/*While Loop


The while loop lets you repeatedly execute a block of code as long as a specified condition is true.

Here's the basic syntax:

while (condition) {
    // code to be repeated
}
Let's create a simple counter:
Initialize a counter variable

int count = 1;
Create a while loop that runs as long as count is less than or equal to 5

while (count <= 5) {
    printf("%d ", count);
    count++;
}
After executing the code, the output will be:

1 2 3 4 5
The loop continues until count becomes 6, at which point the condition count <= 5 becomes false, and the loop ends.

Challenge

Write a program that reads an integer n from the user and prints all even numbers from 2 to n (inclusive) using a while loop.

For example, if the user enters 10, your program should print:

2 4 6 8 10
*/
#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int i = 2;
    while (i <= n)
    {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}