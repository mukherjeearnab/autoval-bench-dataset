int solve_student(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    if (sum > 10 || sum == 10) {
        sum = solve_student(sum);
    }
    return sum;
}