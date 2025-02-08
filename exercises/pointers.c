#include <stdio.h>
// Exercise: Find the Largest of Two Numbers Using Pointers

float find_largest(float *a, float *b);

int main(void) {
    float a = 15.6;
    float b = 19.4;
    float *pointer_a = &a;
    float *pointer_b = &b;

    printf("The value of the largest number is %f\n", find_largest(pointer_a, pointer_b));

    return 0;
}

float find_largest(float *a, float *b){
    if (*a > *b){
        return *a;
    } else if (*a < *b){
        return *b;
    }
}