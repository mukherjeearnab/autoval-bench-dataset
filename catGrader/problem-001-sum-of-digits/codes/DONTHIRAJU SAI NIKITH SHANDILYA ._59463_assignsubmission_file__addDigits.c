int solve_student(int n) {
    // Write solution here
    int sum = 0;

    while (n > 0 || sum > 9) {
        if (n == 0) {
            n = sum;
            sum = 0;
        }
        sum += n % 10;
        n /= 10;
    }
}
