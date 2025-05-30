#include <stdio.h>
int n, sum;
sum = 0;
int solve_student(int n) {
    // Write solution here
    if (n == 0)
        return 0;
    sum = sum + n % 10;
    solve_student(n / 10);
    return sum;
}
