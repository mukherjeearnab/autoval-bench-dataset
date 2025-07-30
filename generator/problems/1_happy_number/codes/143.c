int solve_student(int n) {
    if (n <= 0) return 0;
    int a = 0, b = 0;
    while (b != 1 && b != 4) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        a = b;
        b = sum;
    }
    return (b == 1);
}