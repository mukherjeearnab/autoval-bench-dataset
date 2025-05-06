int solve_student(int a, int b, int c) {
    if (a + b > c && b + c > a && a + c > b) {
        if (a * a + b * b - c * c == 0 || b * b + c * c - a * a == 0 || a * a + c * c - b * b == 0) {
            return 1;
        } else if (a * a + b * b - c * c > 0 && b * b + c * c - a * a > 0 && a * a + c * c - b * b > 0) {
            return 0;
        } else if (a * a + b * b - c * c < 0 || b * b + c * c - a * a < 0 || a * a + c * c - b * b < 0) {
            return 2;
        }
    } else {
        return -1;
    }
    return -1;
}