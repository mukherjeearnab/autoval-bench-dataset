int solve_student(int n) {
    if (n <= 0) return 0;
    int num = n;
    while (num != 1 && num < 10000) {
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    if (num == 1) return 1; else return 0;
}