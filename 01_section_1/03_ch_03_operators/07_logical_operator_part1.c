/*Logical Operators Part 1


Logical operators are used to check combinations of comparisons that return 1 (true) or 0 (false).

For example, the following statement contains two comparisons:

Is 5 greater than 3 and less than 6?

Operator	Meaning	    Example
&&	        And - 1     if all operands are 1	a && b
||	        Or - 1      if any operand is 1	a || b
!	        Not - 1     if the operand is 0	!a


Let's see some examples:

5 is greater than 3 and 1 equals 1:

int b1 = (5 > 3) && (1 == 1); // holds 1 (true)
Explanation: All of the operands are 1, so b1 will hold 1 (and operation is 1 if both operands are 1) .



5 is not equal to 4 or 5 equals 2:

int b2 = !(5 == 4) || (5 == 2); // holds 1 (true)
Explanation: The first operand (5 != 4) is 1 so b2 is also 1 (or operation is 1 if either one of the operands is 1)

Challenge

You are given code. Replace the question marks of the variables int b1 and int b2 so that int b3 holds 1 (true).

Take a moment to analyze the condition and think about what values would make it true.

There are many right solutions!
*/
#include <stdio.h>

int main()
{
    int b1 = 0;
    int b2 = 1;
    int b3 = b1 || b2;

    printf("b3 = %d", b3);
    return 0;
}