int solve_student(int n) {
    int result;
    if (n <= 1) {
        result = n;
    } else {
        result = solve_student(n - 1) + solve_student(n - 2);
    }
    return result;
}