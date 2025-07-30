int solve_student(int n) {
    int sum_of_sq = 0;
    while (n != 1 && n > 0) {
        while (n > 0) {
            int digit = n % 10;
            sum_of_sq += digit * digit;
            n /= 10;
        }
        n = sum_of_sq;
        sum_of_sq = 0;
    }
    if (n == 1) return 1; else return 0;
}