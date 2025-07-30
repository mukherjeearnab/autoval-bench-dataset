int solve_student(int n) {
    int num = n;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += digit * digit;
        num /= 10;
    }
    if (sum == 1) {
        return 1;
    } else if (sum == 4) {
        return 0;
    } else {
        return solve_student(sum);
    }
}