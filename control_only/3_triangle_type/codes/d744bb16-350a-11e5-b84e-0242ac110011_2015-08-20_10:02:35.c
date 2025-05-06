int solve_student(int a, int b, int c) {
    if (a + b <= c || b + c <= a || c + a <= b) {
        return -1; // Invalid Triangle
    }
    if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
        return 0; // Right Triangle
    }
    if (a * a + b * b < c * c || b * b + c * c < a * a || c * c + a * a < b * b) {
        return 2; // Obtuse Triangle
    }
    return 1; // Acute Triangle
}