/*Assignment Operators


Assignment operators in C are used to assign values to variables. The most basic assignment operator is the equals sign =. However, C also provides compound assignment operators that combine arithmetic operations with assignment.

Here are the common assignment operators:

= : Simple assignment
+= : Add and assign
-= : Subtract and assign
*= : Multiply and assign
/= : Divide and assign
%= : Modulo and assign
For example, instead of writing:

int a = 5;
a = a + 3; // a now holds 8
We can simplify it by writing:

int a = 5;
a += 3; // a now holds 8
The += is adding 3 to a and then assigning the result back to a.

Challenge

Write a C program that demonstrates the use of assignment operators. Your program should:

Declare an integer variable num and initialize it with the value 10.
Use the += operator to add 5 to num.
Use the -= operator to subtract 3 from num.
Use the *= operator to multiply num by 2.
Use the /= operator to divide num by 3.
Use the %= operator to get the remainder of num divided by 4.
After each operation, print the value of num using printf() in the following format:

After += 5: [value]
After -= 3: [value]
After *= 2: [value]
After /= 3: [value]
After %= 4: [value]
*/
#include <stdio.h>

int main()
{
    int num = 10;
    num += 5;
    printf("After += 5: %d\n", num);
    num -= 3;
    printf("After -= 3: %d\n", num);
    num *= 2;
    printf("After *= 2: %d\n", num);
    num /= 3;
    printf("After /= 3: %d\n", num);
    num %= 4;
    printf("After %%= 4: %d\n", num);
    return 0;
}
