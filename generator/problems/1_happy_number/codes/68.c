int solve_student(int n) {
    int sum;
    while (n != 1 && n > 0) {
        sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
        if (n == 1) break;
    }
    if (n == 1) return 1;
    else return 0;
}