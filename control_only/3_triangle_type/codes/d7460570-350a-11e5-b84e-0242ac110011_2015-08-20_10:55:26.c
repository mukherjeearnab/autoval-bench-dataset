int solve_student(int a, int b, int c) {
    int ls, ss1, ss2;
    if (a >= b) {
        if (a >= c) {
            ls = a;
            ss1 = b;
            ss2 = c;
        } else {
            ls = c;
            ss1 = a;
            ss2 = b;
        }
    } else {
        if (b > c) {
            ls = b;
            ss1 = a;
            ss2 = c;
        } else {
            ls = c;
            ss1 = a;
            ss2 = b;
        }
    }
    if ((a + b) > c && (a + c) > b && (b + c) > a) {
        if (ls * ls == ss1 * ss1 + ss2 * ss2) {
            return 1; // Right Triangle
        } else if (ls * ls > ss1 * ss1 + ss2 * ss2) {
            return 2; // Obtuse Triangle
        } else {
            return 0; // Acute Triangle
        }
    } else {
        return -1; // Invalid Triangle
    }
}