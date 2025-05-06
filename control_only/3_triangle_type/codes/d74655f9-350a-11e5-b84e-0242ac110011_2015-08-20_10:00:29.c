int solve_student(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a || a <= 0 || b <= 0 || c <= 0) {
        return -1;
    } else {
        if ((a * a) + (b * b) == (c * c) || (a * a) + (c * c) == (b * b) || (b * b) + (c * c) == (a * a)) {
            return 1;
        } else if ((a * a) + (b * b) < (c * c) || (a * a) + (c * c) < (b * b) || (b * b) + (c * c) < (a * a)) {
            return 2;
        } else {
            return 0;
        }
    }
}