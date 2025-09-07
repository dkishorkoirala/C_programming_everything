/*Hello World!


The "Hello World!" program is simple and outputs Hello, World! to the screen. It's often used as a first program when learning a new programming language.

In C, we use the printf() function to print output to the console. The text to be printed is placed within double quotes and followed by a semicolon.

#include <stdio.h>

int main() {
    printf("Hello, World!");
}
The #include <stdio.h> line includes the standard input/output library, which contains the printf() function.


Challenge

Use the code view to write a program that outputs Hello, World!

Note that anything inside quotation marks is case sensitive. For example:

printf("Hello, World!");
printf("hello, world!");
are different things (notice the capital letters in the first line).
*/

#include <stdio.h>

int main(){
    printf("Hello, World!\n");
    return 0;
}