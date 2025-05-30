int solve_student(int n) {
    // Write solution here
    int x = n / 10;
    if (x == 0) {
        return n;
    }
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }
    return solve_student(sum);
}