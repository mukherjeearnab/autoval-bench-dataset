#include <stdio.h>
#include <string.h>



int solve_student(char* str, int length) {
    int left = 0;
    int right = length - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}