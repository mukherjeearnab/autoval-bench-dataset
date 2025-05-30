#include <stdio.h>
int solve_student(int n) {
    if (n < 10) {
        return n;
    } else {
        int m = solve_student(n / 10);
        return solve_student(m + n % 10);
    }
}
