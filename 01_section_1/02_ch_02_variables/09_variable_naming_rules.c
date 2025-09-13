/*Variable Naming Rules


In C, variable naming rules are important to follow for creating valid and readable code. Here are the key rules:

Variable names can contain letters (a-z, A-Z), digits (0-9), and underscores (_).
They must begin with a letter or underscore, not a digit.
C is case-sensitive, so myVariable and myvariable are different.
Keywords (like int, float, return) cannot be used as variable names.
No spaces or special characters (except underscore) are allowed.
Good practices for naming variables include:

Use descriptive names that indicate the variable's purpose.
Use camelCase or snake_case for multi-word names.
Keep names concise but meaningful.
int age;        // Good: starts with a letter
float _price;   // Good: starts with an underscore
Use only letters, numbers, and underscores:

int item123;    // Good: contains letters and numbers
float cost_per_unit;  // Good: uses underscore
Variable names are case-sensitive:

int value;
int Value;    // This is a different variable than "value"
Avoid using C keywords:

int if;        // Wrong: "if" is a keyword
int total;     // Good: "total" is not a keyword

Challenge

Write a program that declares and initializes two variables with valid names according to C naming rules.
The first variable should be an integer named "userAge" set to 25. The second variable should be a float named "item_price" set to 9.99.
Then print both variables using printf in the following format:

User age: 25
Item price: 9.99
*/

#include <stdio.h>

int main()
{
    int userAge = 25;
    float item_price = 9.99;
    printf("User age: %d\n", userAge);
    printf("Item price: %.2f", item_price);
    return 0;
}