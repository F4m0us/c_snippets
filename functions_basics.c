#include <stdio.h>

/*
Examples of functions:
- printf(): Prints output to the console.
- scanf(): Reads user input.
*/

float add(float a);  // Function prototype with correct signature

int main(void) {
    printf("%.2f\n", add(1.5));  // Use %f for float output

    return 0;
}

// Function that adds 1 to the input and returns the result
float add(float a) {
    return a + 1;  
}
