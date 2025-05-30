#include <stdio.h>
int solve_student(int n) {
    if (n == 0)
        return 0;

    int last_dig = n % 10;

    return last_dig + solve_student(n / 10);
    // Write solution here
}

int sum_to_one(int n) {
    if (n / 10 == 0)
        return n;
    return sum_to_one(solve_student(n));
}
