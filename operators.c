#include <stdio.h>

/*
    Arithmetic Operators in C:
    +  : Addition (sum)
    -  : Subtraction (difference)
    *  : Multiplication
    /  : Division (quotient)
    %  : Modulo (remainder of division)
    
    Note: Unlike Python, division between two integers in C results in an integer (truncated).
*/

int main(void) {
    int level = 0;
    
    printf("You are upgrading now\n");
    
    level++;  // Equivalent to level = level + 1; Better not use it
    level += 2;  // Equivalent to level = level + 2;
    
    printf("Level %d", level);
    
    return 0;
}
