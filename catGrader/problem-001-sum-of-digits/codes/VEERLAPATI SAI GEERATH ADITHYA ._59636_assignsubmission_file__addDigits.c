#include <stdio.h>

int solve_student(int n) {
    // Write solution here
    if (n <= 9) {
        return n;
    }

    int s = 0, val = n;

    while (val > 0) {
        s += val % 10;
        val /= 10;
    }
    return solve_student(s);
}
