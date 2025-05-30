int solve_student(int n) {
    // Write solution here

    // Base Case.
    if (n < 10)
        return n;

    // Recursive Case.

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }

    return solve_student(sum);
}