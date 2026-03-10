
#include <stdio.h>



int solve_student(int a, int b, int c) {
    int discriminant = b * b - 4 * a * c;
    printf("Discriminant: %d\n", discriminant);
    return discriminant;
}