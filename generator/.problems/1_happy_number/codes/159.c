int solve_student(int n) {
    int seen[1000] = {0};
    while (n != 1 && n > 0) {
        if (seen[n]) return 0;
        seen[n] = 1;
        int sum = 0;
        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        n = sum;
    }
    return n == 1;
}