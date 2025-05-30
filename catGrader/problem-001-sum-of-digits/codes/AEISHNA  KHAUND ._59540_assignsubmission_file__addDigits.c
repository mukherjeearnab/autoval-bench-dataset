int solve_student(int n)

{
    // Write solution here
    if (n < 10)
        return n;
    int d = 0;
    while (n > 0) {
        d += n % 10;
        n /= 10;
    }
    return solve_student(d);
}