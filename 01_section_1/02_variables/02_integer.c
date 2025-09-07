/*Integer


In C, integers are whole numbers without any decimal points. They are one of the most common data types you'll work with.

Declaring, initializing, and modifying integers:

int age; // Declaring
int score = 100; // Declaring and initializing
score = 90; // Modifying
Print an integer using printf:

printf("%d", score);
The int type stores whole numbers.

Challenge

Create a program that:

Declares an integer variable named number
Assigns the value 50 to this variable
Prints the value of the variable using printf
Your output should look like this:

The value is: 50
*/

#include <stdio.h>

int main(){
    int number = 50;
    printf("The value is: %d", number);
    return 0;
}

