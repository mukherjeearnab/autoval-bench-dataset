int solve_student(int n) {
    // Write solution here
    int sum = 0;
    int cond = 1;

    while (cond == 1) {
        if (n > 0 || sum > 9) {
            cond = 0;
            break;
        }
        if (n == 0) {
            n = sum;
            sum = 0;
        }

        sum += (n % 10);
        n /= 10;
    }
    return sum;
}