int solve_student(int n) {
    int seen[100000] = {0};
    while (n != 1 && seen[n] == 0) {
        seen[n] = 1;
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