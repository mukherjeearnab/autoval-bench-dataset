int solve_student(int n) {
    int seen[1000];
    int i = 0;
    while (n != 1 && n > 0) {
        int temp = n;
        int sum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            sum += digit * digit;
            temp /= 10;
        }
        n = sum;
        int found = 0;
        for (int j = 0; j < i; j++) {
            if (seen[j] == n) {
                found = 1;
                break;
            }
        }
        if (found) return 0;
        seen[i++] = n;
    }
    return (n == 1);
}