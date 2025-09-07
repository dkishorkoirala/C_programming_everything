/*Comments


Comments in C are used to explain code and make it more readable. They are ignored by the compiler and don't affect the program's execution. There are two types of comments in C:

Single-line comments: These start with // and continue until the end of the line.
Multi-line comments: These start with /* and end with *//*. They can span multiple lines.
Here's an example of both types:

#include <stdio.h>

int main() {
    // This is a single-line comment
    printf("Hello, World!"); // This is also a single-line comment

    /* This is a multi-line comment
       It can span multiple lines *//*

    return 0;
}
Comments are useful for explaining complex code, providing context, or temporarily disabling code for debugging purposes.

Quiz icon
Quiz

2 Questions
Start
Arrow icon

Challenge

Easy
Your task is to add comments to the given code:

Add a single-line comment before the printf() function explaining what it does (sentence ‘This line prints “Hello, C!”’)
Add a multi-line comment exactly after the header with your name and the current date in the format:

 Author: [Your Name]
 Date: [Current Date] 
*/

#include <stdio.h>
/*Author: [your name]
Date: [current date]*/

int main(){
    // This line prints “Hello, C!”’
    printf("Hello, C!\n");
    return 0;
}
