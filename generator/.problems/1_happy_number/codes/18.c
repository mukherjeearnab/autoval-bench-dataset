int solve_student(int n) {
    int sum = 0;
    while (n != 1 && n > 0) {
        while (n > 0) {
            int digit = n % 10;
            sum = sum + digit * digit;
            n = n / 10;
        }
        if (sum == 1) {
            return 1;
        } else if (sum == 4) {
            return 0;
        }
        n = sum;
    }
    return n == 1;
}