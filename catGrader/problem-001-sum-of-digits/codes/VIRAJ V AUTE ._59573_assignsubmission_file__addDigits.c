
// #include<stdio.h>
int solve_student(int n) {
    // Write solution here
    int sum = 0;
    int m = n;
    while (m > 0) {
        sum += m % 10;
        m /= 10;
    }

    while (sum >= 10) {
        sum = solve_student(sum);
    }

    return sum;
}
