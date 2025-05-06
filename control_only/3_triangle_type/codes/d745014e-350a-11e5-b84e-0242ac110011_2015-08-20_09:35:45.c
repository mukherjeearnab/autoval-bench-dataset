int solve_student(int a, int b, int c) {
    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        if ((a * a + b * b > c * c) && (b * b + c * c > a * a) && (c * c + a * a > b * b)) {
            return 0; // Acute Triangle
        }
        if ((a * a + b * b < c * c) || (a * a + c * c < b * b) || (b * b + c * c < a * a)) {
            return 2; // Obtuse Triangle
        }
        if ((a * a + b * b == c * c) || (a * a + c * c == b * b) || (b * b + c * c == a * a)) {
            return 1; // Right Triangle
        }
    }
    return 3; // Invalid Triangle
}