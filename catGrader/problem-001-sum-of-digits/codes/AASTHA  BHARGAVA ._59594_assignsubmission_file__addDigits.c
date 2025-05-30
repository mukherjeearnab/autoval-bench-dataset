#include <stdio.h>
int solve_student(int n) {
    int sum = 0;
    // int m=n;
    for (int i = 0; n > 0; i++) {
        sum += n % 10;
        n = n / 10;
    }
    // printf("%d %d\n",m,sum);
    if (sum >= 10) {
        return solve_student(sum);
    } else {
        return sum;
    }
}