#include <stdio.h>

int solve_student(int n) {
    // Write solution here
    int ans = 0;
    while (n > 0) {
        ans += n % 10;
        n /= 10;
    }
    if (ans < 10)
        return ans;
    else
        return solve_student(ans);
}
