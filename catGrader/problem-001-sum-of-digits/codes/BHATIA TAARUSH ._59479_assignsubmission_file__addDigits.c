int solve_student(int n) {
    int temp = n;
    int sum = 0;
    while (n > 0) {
        int d = n % 10;
        sum += d;
        n /= 10;
    }

    if (sum >= 10)
        sum = solve_student(sum);

    return sum;

    // Write solution here
}