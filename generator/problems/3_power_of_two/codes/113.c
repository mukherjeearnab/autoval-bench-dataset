int solve_student(int n) {
    int i = 0;
    if (n <= 0) return 0;
    while (n > 1) {
        if (n % 2 != 0) {
            return 0;
        }
        n /= 2;
        i++;
    }
    return 1;
}