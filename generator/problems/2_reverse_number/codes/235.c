int solve_student(int n) {
    int rev = 0;
    if (n == 0) return 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    if (rev > INT_MAX / 2 || rev < INT_MIN / 2) {
        return 0;
    }
    return rev;
}