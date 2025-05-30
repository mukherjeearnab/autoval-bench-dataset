#include <stdio.h>

int solve_student(int n) {
    if (n == 0) {
        return 0;
    } else {
        int r = n % 9;
        if (r == 0) {
            return 9;
        } else {
            return r;
        }
    }
}
