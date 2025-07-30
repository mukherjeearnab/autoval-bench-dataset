int solve_student(int n) {
    int sum = 0;
    int temp;
    while (n > 0) {
        temp = n % 10;
        sum += temp * temp;
        n /= 10;
    }
    if (sum == 1) return 1;
    if (sum == 4) return 0;
    return solve_student(sum);
}