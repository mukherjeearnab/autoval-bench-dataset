#include <stdio.h>
#define LAST 10

int solve_student(int n) {
    // Write solution here

    int tempsum = 0;
    while (n != 0) {
        int r;
        r = n % 10;
        tempsum += r;
        n = n / 10;
    }
    if (tempsum >= 10) {
        return solve_student(tempsum);
    } else {
        return tempsum;
    }
}

void solve(int tc) {
    int n;
    scanf("%d", &n);
    int sum = solve_student(n);
    printf("%d\n", sum);
}
