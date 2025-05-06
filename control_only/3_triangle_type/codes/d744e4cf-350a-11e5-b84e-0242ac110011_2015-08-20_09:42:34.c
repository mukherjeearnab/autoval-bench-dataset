int solve_student(int a, int b, int c) {
    // Check if the triangle is valid
    if (a + b > c && b + c > a && a + c > b) {
        // Determine the largest side and classify the triangle
        if (c * c >= a * a + b * b) {
            if (c * c == a * a + b * b) {
                return 1; // Right Triangle
            } else {
                return 2; // Obtuse Triangle
            }
        } else {
            return 0; // Acute Triangle
        }
    } else {
        return 3; // Invalid Triangle
    }
}