int solve_student(int n) {
    long long reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        n /= 10;
        reversed = reversed * 10 + digit;
        if (reversed > INT_MAX || reversed < INT_MIN) return 0;
    }
    return (int)reversed;
}