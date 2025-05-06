int solve_student(int a, int b, int c) {
    if ((a + b > c) && (b + c > a) && (c + a > b)) {
        if (((a * a + b * b) == (c * c)) || ((b * b + c * c) == (a * a)) || ((a * a + c * c) == (b * b))) {
            return 1; // Right Triangle
        } else if (((a * a + b * b) > (c * c)) && ((a * a + c * c) > (b * b)) && ((b * b + c * c) > (a * a))) {
            return 0; // Acute Triangle
        } else {
            return 2; // Obtuse Triangle
        }
    } else {
        return -1; // Invalid Triangle
    }
}