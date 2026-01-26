int solve_student(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    int i = 2;
    while (i < n) {
        if (n % i == 0) {
            if (i == 2 || i == 3 || i == 5) n /= i;
        } else {
            i++;
        }
    }
    return n == 1;
}