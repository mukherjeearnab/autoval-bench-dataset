/* Student 9 */
#include <stdio.h>



int solve_student(int a, int b, int c) {
    int discriminant = b * b - 4 * a * c;
    if (discriminant < 0) {
        return 0;
    }
    return discriminant;
}