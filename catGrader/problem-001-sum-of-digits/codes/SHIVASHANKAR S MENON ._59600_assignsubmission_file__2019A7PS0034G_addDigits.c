int solve_student(int n) {
    if (n == 0) {
        return 0;
    }
    int rem = n % 10;
    int quo = n / 10;  // Write solution here
    return (rem + solve_student(quo));
}