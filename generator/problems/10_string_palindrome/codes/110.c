#include <stdio.h>



int solve_student(const char s[], int n) {
    int i;
    for(i=0;i<n/2;i++){
        if(s[i]!=s[n-i])
            return 0;
    return 1;
}