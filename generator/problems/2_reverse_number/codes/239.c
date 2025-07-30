int solve_student(int n) {
    int reversed = 0;
    int sign = 1;
    if (n < 0) {
        sign = -1;
        n = -n;
    }
    while (n != 0) {
        int digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    reversed = reversed * sign;
    if (reversed > 2147483647 || reversed < -2147483648) {
        return 0;
    } else {
        return reversed;
    }
}