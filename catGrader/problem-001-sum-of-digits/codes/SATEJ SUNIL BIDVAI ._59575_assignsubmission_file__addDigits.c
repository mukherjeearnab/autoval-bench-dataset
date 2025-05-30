int solve_student(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }

    if (sum > 9)
        return solve_student(sum);
    return sum;
}