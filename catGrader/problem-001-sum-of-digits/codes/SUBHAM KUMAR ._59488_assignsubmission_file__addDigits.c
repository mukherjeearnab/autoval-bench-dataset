#include <stdio.h>
int solve_student(int n) {
    // Write solution here
    while (n > 9) {
        int p = n;
        int s = 0;
        while (p) {
            s += p % 10;
            p /= 10;
        }
        n = s;
    }
    return n;
}
