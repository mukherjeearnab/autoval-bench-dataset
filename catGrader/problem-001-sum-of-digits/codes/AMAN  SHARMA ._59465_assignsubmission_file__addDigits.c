int solve_student(int n) {
    // Write solution here
    int sum = 0;
    if (n > 0) {
        sum += n % 10;
    }
    n = n / 10;
    if (n > 0) {
        sum += solve_student(n);
    }
    return sum;
}