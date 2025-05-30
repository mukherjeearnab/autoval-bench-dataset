int solve_student(int n) {
    // Write solution here
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    if (sum >= 10)
        return solve_student(sum);
    else
        return sum;
}
