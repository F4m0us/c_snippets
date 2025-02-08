#include <stdio.h>
#include <stdbool.h>

/*
    Comparison Operators:
    ==  : Equal to
    !=  : Not equal to
    >   : Greater than
    <   : Less than
    >=  : Greater than or equal to
    <=  : Less than or equal to

    Logical Operators:
    &&  : Logical AND (true if both conditions are true)
    ||  : Logical OR (true if at least one condition is true)
    !   : Logical NOT (negates a boolean value)

    Control Structures:
    - if/else: Executes different blocks of code based on conditions.
    - Ternary Operator (condition ? true_case : false_case): A short form of if/else.
    - switch/case: A structured way to handle multiple conditions.
*/

int main(void) {
    int value = -10;
    bool isTrue = false;
    int age = 80;

    // Using if-else to check the value of 'value'
    if (value == 0) {
        printf("0\n");
    } else if (value >= 1) {
        printf(">= 1\n");
    } else {
        printf("Else\n");  // Added newline for correct formatting
    }

    // Checking the boolean variable 'isTrue'
    if (isTrue) {
        printf("True\n");
    } else {  // No need for an extra condition (!isTrue) here
        printf("False\n");
    }

    // Using the ternary operator to check 'age'
    (age == 50) ? printf("You are 50\n") : printf("You aren't 50\n");

    // Switch-case statement for checking age
    switch (age) {
        case 0:
            printf("You are 0 years old\n");
            break;  // Prevent fall-through

        case 80:
            printf("You are dead\n");
            break;

        default:
            break;  // Default case to handle other values
    }

    return 0;
}
