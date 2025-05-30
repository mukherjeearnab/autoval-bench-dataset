#include <stdio.h>

int solve_student(int n) {
    while (n > 9) {
        int sumOfDigits = 0;
        while (n > 0) {
            sumOfDigits += n % 10;
            n /= 10;
        }
        n = sumOfDigits;
    }
    return n;
}
