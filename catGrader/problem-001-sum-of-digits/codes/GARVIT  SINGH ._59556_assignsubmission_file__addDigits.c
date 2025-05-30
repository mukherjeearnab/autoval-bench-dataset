// #include<stdio.h>

int solve_student(int n) {
    // Write solution here
    int k = 0;
    if (n / 10 == 0)
        return n;
    int ten = 10;
    while (n != 0) {
        k += n % 10;
        n /= 10;
    }
    return solve_student(k);
}
