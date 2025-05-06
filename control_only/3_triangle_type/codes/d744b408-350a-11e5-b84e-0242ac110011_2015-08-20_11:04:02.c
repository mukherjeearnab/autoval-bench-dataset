int solve_student(int a, int b, int c) {
    if (a + b <= c || b + c <= a || c + a <= b) {
        return -1; // Invalid Triangle
    } else {
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
            return 0; // Right Triangle
        } else if (a * a > b * b + c * c && b * b > a * a + c * c && c * c > a * a + b * b) {
            return -1; // Invalid condition, should not happen
        } else if ((a * a < b * b + c * c) && (b * b < a * a + c * c) && (c * c < a * a + b * b)) {
            return 1; // Acute Triangle
        } else {
            return 2; // Obtuse Triangle
        }
    }
}