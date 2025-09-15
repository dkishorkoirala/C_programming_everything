/*Logical Operators Part 2


Logical operators have a special table called a "Truth table" that shows what the combination of logical operators returns.

Truth table for the and (&&) operator:

a	b	a && b
0	0	0
0	1	0
1	0	0
1	1	1
The only way to get a 1 (true) for the and (&&) operator is if both a and b are 1 (true)

Truth table for the or (||) operator:

a	b	a || b
0	0	0
0	1	1
1	0	1
1	1	1
In this case, to get a 1 (true) result, either a or b should be 1 (true).

Truth table for the not (!) operator:

a	!a
0	1
1	0
Here, the value of a is reversed. If a is 0 (false) then !a is 1 (true)

Challenge

You need to assign integer values to variables b1 and b2 so that b3 evaluates to 1 (true) in the expression: int b3 = !((b1 + b2) > (b1 * b2));

Take a moment to analyze the condition and think about what values would make it true.
*/

#include <stdio.h>

int main()
{
    int b1 = 0;
    int b2 = 0;
    int b3 = !((b1 + b2) > (b1 * b2));

    printf("b3 = %d\n", b3);

    return 0;
}