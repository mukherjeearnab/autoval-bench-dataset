int solve_student(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) return 0;
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) return 0;
        reversed = reversed * 10 + digit;
    }
    return reversed;
}