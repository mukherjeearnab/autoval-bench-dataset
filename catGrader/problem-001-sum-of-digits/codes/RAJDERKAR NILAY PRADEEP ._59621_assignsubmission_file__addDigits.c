#include <stdio.h>
int solve_student(int n) {
    if (n < 10)
        return n;
    else
        return (solve_student(solve_student(n / 10) + n % 10));
}
