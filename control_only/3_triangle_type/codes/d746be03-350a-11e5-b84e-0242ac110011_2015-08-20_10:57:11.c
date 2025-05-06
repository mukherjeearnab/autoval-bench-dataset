int solve_student(int a, int b, int c) {
    if (a + b <= c || b + c <= a || a + c <= b || a <= 0 || b <= 0 || c <= 0)
        return -1;
    if (a >= b && a >= c) {
        int d = (b * b + c * c) - (a * a);
        if (d == 0)
            return 1; // Right Triangle
        else if (d < 0)
            return 0; // Acute Triangle
        else
            return 2; // Obtuse Triangle
    } else if (b >= c && b >= a) {
        int d = (a * a + c * c) - (b * b);
        if (d == 0)
            return 1; // Right Triangle
        else if (d < 0)
            return 0; // Acute Triangle
        else
            return 2; // Obtuse Triangle
    } else {
        int d = (a * a + b * b) - (c * c);
        if (d == 0)
            return 1; // Right Triangle
        else if (d < 0)
            return 0; // Acute Triangle
        else
            return 2; // Obtuse Triangle
    }
}