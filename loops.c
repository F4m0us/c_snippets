#include <stdio.h>

/*
    Loop Types in C:
    
    1. while loop: Repeats while a condition is true.
    2. do-while loop: Executes the block at least once, then repeats while the condition is true.
    3. for loop: Used when the number of iterations is known.

    - break: Immediately exits the loop.
    - continue: Skips the current iteration and proceeds to the next one (not used here).
*/

int main(void) {
    int i = 0;  // Counter for while loop
    int j = 0;  // Counter for do-while loop
    int k;      // Counter for for loop

    // While loop: Runs while i is less than or equal to 20
    while (i <= 20) {
        printf("%d\n", i);
        i++;
    }

    // Do-while loop: Executes once, then checks the condition
    do {
        printf("%d\n", j);
        j++;
    } while (j <= 5);

    // For loop: Runs once but exits early due to "break"
    for (k = 0; k <= 5; k++) {
        printf("for\n");
        break;  // Exits loop immediately after first iteration
    }

    return 0;
}

