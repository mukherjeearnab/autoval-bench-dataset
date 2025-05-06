int solve_student(int a, int b, int c) {
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        int p = (a * a) + (b * b) - (c * c);
        int q = (b * b) + (c * c) - (a * a);
        int r = (a * a) + (c * c) - (b * b);
        
        if ((p > 0) && (q > 0) && (r > 0)) {
            return 0; // Acute Triangle
        } else if ((p == 0) || (q == 0) || (r == 0)) {
            return 1; // Right Triangle
        } else if ((p < 0) || (q < 0) || (r < 0)) {
            return 2; // Obtuse Triangle
        }
    }
    return 3; // Invalid Triangle
}