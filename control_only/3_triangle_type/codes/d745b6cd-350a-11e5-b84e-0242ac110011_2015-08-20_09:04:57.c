int solve_student(int a, int b, int c) {
    if ((a + b <= c) || (b + c <= a) || (c + a <= b) || (a <= 0) || (b <= 0) || (c <= 0)) {
        return -1;
    }
    if (a > b && a > c) {
        if (a * a < b * b + c * c) {
            return 0; // Acute
        } else if (a * a > b * b + c * c) {
            return 2; // Obtuse
        } else {
            return 1; // Right
        }
    } else if (b > a && b > c) {
        if (b * b < a * a + c * c) {
            return 0; // Acute
        } else if (b * b > a * a + c * c) {
            return 2; // Obtuse
        } else {
            return 1; // Right
        }
    } else {
        if (c * c < a * a + b * b) {
            return 0; // Acute
        } else if (c * c > a * a + b * b) {
            return 2; // Obtuse
        } else {
            return 1; // Right
        }
    }
}