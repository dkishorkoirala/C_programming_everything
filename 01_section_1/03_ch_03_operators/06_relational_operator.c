/*Relational Operators


Comparison operators are used to compare two operands.

Sometimes we need to check whether an operand is bigger/smaller/... than another operand. The following table shows possible operators for comparison:

Operator	Meaning	             Example
==	        Equal	            1 == 2 returns 0 (false)
!=	        Not Equal	        1 != 2 returns 1 (true)
>	        Greater Than	    1 > 2 returns 0 (false)
<	        Less Than	        1 < 2 returns 1 (true)
>=	        Greater or Equal	1 >= 2 returns 0 (false)
<=	        Less or Equal	    1 <= 2 returns 1 (true)

The comparison operator returns 1 if the comparison is true or 0 if it's false.

For example:

int var1 = 13;
int var2 = 12;
int var3 = var1 != var2;
var3 will hold 1 because var1 and var2 are not equal

Challenge

Write a program that initializes 2 variables n1 and n2 with the values 8 and 9 (accordingly).

After that initialize another variable n3 that will hold whether n1 is greater than n2.

Print the values of all three variables using printf() in the following format:

n1 = [value of n1], n2 = [value of n2], n3 = [value of n3]
*/

#include <stdio.h>

int main()
{
    int n1 = 8, n2 = 9;
    int n3 = n1 > n2;

    printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);

    return 0;
}