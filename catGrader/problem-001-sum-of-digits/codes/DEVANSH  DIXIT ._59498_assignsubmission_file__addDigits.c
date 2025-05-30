// #include<stdio.h>

int solve_student(int n) {
    int sum = 0;
    if (n < 10) {
        return n;
    }

    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }

    solve_student(sum);
}
