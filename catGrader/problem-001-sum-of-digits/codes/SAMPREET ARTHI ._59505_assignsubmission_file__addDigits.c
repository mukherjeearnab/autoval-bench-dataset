int solve_student(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }

    if (sum < 10)
        return sum;
    else
        return solve_student(sum);
}
