int solve_student(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        if ((a * a + b * b < c * c) || 
            (b * b + c * c < a * a) || 
            (a * a + c * c < b * b)) {
            return 2; // Obtuse Triangle
        } else if ((a * a + b * b == c * c) || 
                   (b * b + c * c == a * a) || 
                   (a * a + c * c == b * b)) {
            return 1; // Right Triangle
        } else {
            return 0; // Acute Triangle
        }
    } else {
        return 3; // Invalid Triangle
    }
}