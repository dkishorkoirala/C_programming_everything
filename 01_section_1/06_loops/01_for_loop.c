/*For Loop
The for loop is a control structure that allows you to execute a block of code repeatedly for a specific number of times.

A for loop has three components:

Initialization (executed once before the loop starts)
Condition (checked before each iteration)
Update (executed after each iteration)
for (initialization; condition; update) {
    // code to be executed
}
Let's create a simple for loop that counts from 1 to 5:

for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
After executing the above code, the output will be:

1 2 3 4 5
How this works:

First, we initialize i to 1
Then we check if i <= 5 (true, so we execute the loop body)
We print the value of i
We increment i by 1
We repeat steps 2-4 until the condition becomes false

Challenge

Create a program that takes an integer n from input and uses a for loop to print all numbers from 1 to n, each separated by a space.

Example output for n = 4:

1 2 3 4
Make sure to include a space after each number, including the last one.*/
#include <stdio.h>

int main()
{
    // Write your code here
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return 0;
}