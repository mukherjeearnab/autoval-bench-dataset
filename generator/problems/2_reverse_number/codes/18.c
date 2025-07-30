int solve_student(int n) {
    int rev = 0;
    int sign = 1;
    if (n < 0) {
        sign = -1;
        n = -n;
    }
    while (n > 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    if (rev > INT_MAX / 10 || rev < INT_MIN / 10) return 0; 
    return sign * rev;
}