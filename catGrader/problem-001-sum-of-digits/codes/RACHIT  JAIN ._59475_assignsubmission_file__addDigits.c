int solve_student(int n) {
    // Write solution here
    if (n == 0)
        return 0;
    if (n % 9 == 0)
        return 9;
    return n % 9;
}