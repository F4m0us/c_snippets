#include <stdio.h>

// Macros (replaced before compilation)
#define VAT 20  // Replaces "VAT" with "20" during compilation (this is not a variable)
#define printamazing printf  // "printamazing" is an alias for "printf"
#define Area (5*5)  // Macro to calculate an area (could be replaced with a `const int`)

/*
** Predefined macros in C: **
- __FILE__  : Name of the source file being compiled.
- __LINE__  : Line number in the source file.
- __DATE__  : Compilation date (format "Mmm DD YYYY").
- __TIME__  : Compilation time (format "HH:MM:SS").
*/

int main(void) {
    int priceExclTax = 15;
    int priceInclTax = 0;

    // Calculate the price including tax using the VAT macro
    priceInclTax = priceExclTax + (priceExclTax * VAT / 100);

    // Using the alias macro "printamazing"
    printamazing("Hello\n");

    // Display predefined macros
    printf("File: %s\n", __FILE__);
    printf("Line: %d\n", __LINE__);
    printf("Date: %s\n", __DATE__);
    printf("Time: %s\n", __TIME__);

    return 0;
}
