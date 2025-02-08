#include <stdio.h>

/*
    variable       : stores the content of the variable (e.g., a number, character, etc.)
    &variable      : stores the address where the variable is stored (used with scanf to get user input)
*/

int main(void) {
    int ageUser = 0;  // Declare an integer to store the user's age
    
    printf("How old are you: ");
    
    // Using scanf to take user input. It's important to check the return value for successful input.
    if (scanf("%d", &ageUser) != 1) {
        printf("Invalid input. Please enter a valid number for age.\n");
        return 1;  // Exit with error if input is invalid
    }

    printf("You are %d years old.\n", ageUser);  
    return 0; 
}