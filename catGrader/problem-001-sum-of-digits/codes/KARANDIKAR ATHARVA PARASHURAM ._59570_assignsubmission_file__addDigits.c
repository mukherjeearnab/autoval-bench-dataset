int solve_student(int n) {
    if (n <= 9) {
        return n;
    } else {
        if (n % 9 == 0) {
            return 9;
        }
        return n % 9;
    }
}