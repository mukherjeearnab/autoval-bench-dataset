int solve_student(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    if (sum == 1) return 1;
    if (sum == 4) return 0;
    if (sum == 16) return 0;
    if (sum == 37) return 0;
    if (sum == 58) return 0;
    if (sum == 89) return 0;
    if (sum == 145) return 0;
    if (sum == 42) return 0;
    if (sum == 20) return 0;
    return solve_student(sum);
}