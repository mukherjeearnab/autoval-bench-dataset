int solve_student(int a, int b, int c) {
    if (a + b <= c || b + c <= a || a + c <= b) {
        return -1; // Invalid Triangle
    } else if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) {
        return 0; // Right Triangle
    } else if (c * c < a * a + b * b) {
        return 1; // Acute Triangle
    } else {
        return 2; // Obtuse Triangle
    }
}