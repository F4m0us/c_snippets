#include <stdio.h>
#define LEN_TAB 10

void print_table(int *tab, int len_table);
int* create_table(void);

/*
    🔹 Arrays and Pointers in C

    - An array is a **contiguous block of memory** that stores multiple values of the same type.
    - The array name **acts as a pointer** to its first element.

    [Initialization of Arrays]
        <type> <array_name>[size];  // Random values if uninitialized
        <type> <array_name>[size] = {val1, val2, ...};  // Explicit initialization
        <type> <array_name>[size] = {0};  // All elements initialized to 0

    [Accessing Array Elements]
        array[X];       // Value at index X
        array;          // Address of the first element
        *array;         // Value of the first element
        *(array + X);   // Same as array[X] (alternative syntax)
    
    ⚠️ The syntax *(array + X) is valid, not deprecated. It's just pointer arithmetic.
*/

int main(void) {
    int table1[5] = {16, 4, -5, 22, 188};
    int table2[3] = {0};  // All elements initialized to 0
    int table3[4] = {4, 3};  // First two elements set, rest are 0

    // 2D Array Example (3x2 Matrix)
    int grid[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };

    // Modifying elements in an array
    table1[0] = 14;
    table1[1] = 6;

    // Creating and printing a dynamic table
    int* table4 = create_table();
    print_table(table4, 5);

    return 0;
}

// Function to print elements of an array
void print_table(int tab[], int len_table) {
    int i;
    for (i = 0; i < len_table; i++) {
        printf("%d\n", tab[i]);
    }
}

// Function that returns a pointer to a static array
int* create_table(void) {
    static int table[5];  // Static ensures memory persists after function returns
    int i;
    for (i = 0; i < 5; i++) {
        table[i] = i * 10;
    }
    return table;  // Safe because it's a static variable
}
