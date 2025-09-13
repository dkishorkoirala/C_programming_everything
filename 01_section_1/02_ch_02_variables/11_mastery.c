/*Challenge


Create a program that demonstrates type casting between different numeric data types:

Declare an int variable named smallNumber with value 42
Declare a float variable named mediumNumber with value 123.456
Declare a double variable named largeNumber
Use implicit casting to convert smallNumber to largeNumber
Print largeNumber with the message "Small to large: " using printf and 1 decimal place
Use implicit casting to convert mediumNumber to largeNumber
Print largeNumber with the message "Medium to large: " using printf and 1 decimal place
*/

#include <stdio.h>
int main()
{
    int smallNumber = 42;
    float mediumNumber = 123.456;
    double largeNumber = smallNumber;

    printf("Small to large: %.1f\n", largeNumber);
    largeNumber = mediumNumber;
    printf("Medium to large: %.1f", largeNumber);
    return 0;
}