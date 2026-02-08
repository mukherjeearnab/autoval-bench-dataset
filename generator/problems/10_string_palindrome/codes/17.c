#include <stdio.h>
#include <string.h>



int solve_student(char *s, int len) {
    int start = 0;
    int end = len - 1;

    while (start < end) {
        if (s[start] != s[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}