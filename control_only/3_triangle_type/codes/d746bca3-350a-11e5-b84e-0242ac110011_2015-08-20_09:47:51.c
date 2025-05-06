int solve_student(int a, int b, int c) {
    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        if ((c * c == (b * b + a * a)) || (a * a == (b * b + c * c)) || (b * b == (a * a + c * c))) {
            return 1; // Right Triangle
        } else if ((c * c > (b * b + a * a)) || (a * a > (b * b + c * c)) || (b * b > (a * a + c * c))) {
            return 2; // Obtuse Triangle
        } else {
            return 0; // Acute Triangle
        }
    } else {
        return -1; // Invalid Triangle
    }
}