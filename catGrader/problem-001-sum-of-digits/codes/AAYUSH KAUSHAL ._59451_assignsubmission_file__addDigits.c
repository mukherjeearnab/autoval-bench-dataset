int solve_student(int n) {
    int m, sum;
    while (n > 0) {
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    if (sum < 0) {
        return sum;
    } else {
        return solve_student(sum);
    }
}