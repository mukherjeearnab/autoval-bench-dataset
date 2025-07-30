int solve_student(int n) {
    int seen[1000] = {0};
    int num = n;
    while (num != 1 && num != 4) {
        if (seen[num]) {
            return 0;
        }
        seen[num] = 1;
        int sum = 0;
        while (num > 0) {
            int digit = num % 10;
            sum += digit * digit;
            num /= 10;
        }
        num = sum;
    }
    return num == 1;
}