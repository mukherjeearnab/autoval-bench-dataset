int solve_student(int a, int b, int c) {
    if (a + b <= c || a + c <= b || b + c <= a) {
        return -1; // Invalid Triangle
    }
    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        return 1; // Right Triangle
    }
    if (a * a + b * b > c * c && a * a + c * c > b * b && b * b + c * c > a * a) {
        return 0; // Acute Triangle
    }
    if (a * a + b * b < c * c || a * a + c * c < b * b || b * b + c * c < a * a) {
        return 2; // Obtuse Triangle
    }
    return -1; // Invalid Triangle (should never reach here)
}