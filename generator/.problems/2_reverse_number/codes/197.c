int solve_student(int n) {
    int reversed = 0;
    while (n != 0) {
        int digit = n % 10;
        if (reversed > 214748364) {
          return 0;
        }
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return reversed;
}