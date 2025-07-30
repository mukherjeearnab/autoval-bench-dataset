int solve_student(int n) {
    int i = 0;
    while (n != 1 && i < 1000) {
        int sum = 0;
        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        n = sum;
        i++;
    }
    if (n == 1) return 1; else return 0;
}