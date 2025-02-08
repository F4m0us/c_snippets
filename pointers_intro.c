#include <stdio.h>

/*
    Pointer: a variable that stores the address of another variable.

    %p -> Prints the address of a variable or a pointer.

    [Variables]
        myVariable  = value of the variable
        &myVariable = address of the variable

    [Pointers]
        myPointer   = address of the variable pointed to
        *myPointer  = value of the variable pointed to
        &myPointer  = address of the pointer itself

    Initialization:
        myPointer = NULL;        // Pointer initialized with no address
        myPointer = &myVariable; // Pointer now holds the address of myVariable
*/

// Function to swap two integers using pointers
void invert_numbers(int *a, int *b);

int main(void) {
    int a = 5;
    int b = 10;
    
    int *pointerOverA = &a;
    int *pointerOverB = &b;

    printf("BEFORE: Value of a = %d, Address of a = %p\n", a, (void*)&a);
    printf("BEFORE: Value of b = %d, Address of b = %p\n", b, (void*)&b);
    
    invert_numbers(pointerOverA, pointerOverB);
    
    printf("AFTER: Value of a = %d, Address of a = %p\n", a, (void*)&a);
    printf("AFTER: Value of b = %d, Address of b = %p\n", b, (void*)&b);

    return 0;
}

// Function that swaps two integers using pointers
void invert_numbers(int *a, int *b) {
    int temp = *a;  // Store the value of a
    *a = *b;        // Assign b's value to a
    *b = temp;      // Assign temp's value (original a) to b
}
