int solve_student(int a, int b, int c) {
    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
            return 1; // Right Triangle
        } else if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > a * a + b * b)) {
            return 2; // Obtuse Triangle
        } else {
            return 3; // Acute Triangle
        }
    } else {
        return 0; // Invalid Triangle
    }
}