int solve_student(int n) {
    int res = n;
    while (res != 1 && res > 0) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
        if (n == res) return 0;
        res = n;
    }
    return (n == 1);
}