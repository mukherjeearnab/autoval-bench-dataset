int solve_student(int n) {
    if ((n / 10) == 0)
        return n;
    int sum = (n % 10) + solve_student(n / 10);
    if ((sum / 10))
        return solve_student(sum);
    return sum;
}
