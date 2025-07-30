int solve_student(int n) {
    int temp = n;
    while (temp != 1 && temp > 0) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
        temp = n;
    }
    if (n == 1) return 1;
    return 0;
}