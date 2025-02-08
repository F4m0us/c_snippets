#include <stdio.h>

// Comments for format specifiers
/*
    %d : int       -> used to print integers
    %f : float     -> used to print floating point numbers
    %c : char      -> used to print characters
    %s : string    -> used to print strings
*/

int main(void) {
    // Declare and initialize variables
    int a, b, c;  //  Declare a few variables
    int age = 16;  // Integer to store age
    signed char test = 65;  // signed char, will store ASCII value of 'A'
    float nombre = 1234.56;  // Float to store a decimal number
    int nombre_entier = (int)nombre;  // Cast float to int (rounding down)
    
    // Constant value for PI (cannot be changed)
    const float PI = 3.14;  // Constant declaration

    // Print messages with formatted data
    printf("Hello World!\n");  // Output a greeting message
    printf("He is %d years old\n", age);  // Display age with format specifier %d
    printf("The number is %f, the integer part is %d\n", nombre, nombre_entier);  // Display float and its integer part
    printf("The rounded float is %.2f\n", nombre);  // Display the float rounded to 2 decimal places
    
    return 0;  // End of program
}