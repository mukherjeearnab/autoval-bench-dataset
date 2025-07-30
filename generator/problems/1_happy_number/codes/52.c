int solve_student(int n) {
    int seen[1000];
    int size = 0;
    while (n != 1 && n != 0) {
        for (int i = 0; i < size; i++) {
            if (seen[i] == n) {
                return 0;
            }
        }
        seen[size++] = n;
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}