

int solve_master(int n) {
    if (n < 10)
        return n;

    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n = n / 10;
    }

    return solve_master(sum);
}
