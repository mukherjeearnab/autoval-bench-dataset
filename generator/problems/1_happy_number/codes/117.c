int solve_student(int n) {
    int seen[1000];
    int i = 0;
    while (n != 1 && n != 4) {
        seen[i++] = n;
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
        for (int j = 0; j < i; j++) {
            if (seen[j] == n) {
                return 0;
            }
        }
    }
    return (n == 1);
}