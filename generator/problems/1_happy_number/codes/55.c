int solve_student(int n) {
    if (n <= 0) return 0;
    int seen[1000] = {0};
    int i = 0;
    while (n != 1 && n != 4) {
        if (seen[n % 1000] == 1) return 0;
        seen[n % 1000] = 1;
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}