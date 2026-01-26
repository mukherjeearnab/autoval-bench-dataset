int solve_student(int n) {
    int sum = 0;
    while (n != 1 && n > 0) {
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
        if (n == 1) return 1;
        if (n == 0) return 0;
    }
    return 0;
}