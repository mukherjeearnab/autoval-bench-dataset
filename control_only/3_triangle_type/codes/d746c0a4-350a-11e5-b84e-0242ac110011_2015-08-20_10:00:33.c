int solve_student(int a, int b, int c) {
    if (a + b > c && a + c > b && b + c > a) {
        int A = (b * b) + (c * c) - (a * a);
        int B = (a * a) + (c * c) - (b * b);
        int C = (a * a) + (b * b) - (c * c);
        
        if (A < 0 || B < 0 || C < 0) {
            return 2; // Obtuse Triangle
        } else if (A == 0 || B == 0 || C == 0) {
            return 1; // Right Triangle
        } else {
            return 0; // Acute Triangle
        }
    } else {
        return -1; // Invalid Triangle
    }
}