
int solve_student(int n) {
    if (n == 0) return 0;
    int sum = solve_student(n / 10);
    sum += n % 10;
    if (sum < 10) return sum;
    return solve_student(sum);
}
