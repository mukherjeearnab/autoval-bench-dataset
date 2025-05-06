int solve_student(int a, int b, int c) {
    if (a < b) {
        int d = b;
        b = c;
        c = d;
    } else if (a > b) {
        if (a < c) {
            int e = a;
            a = b;
            b = e;
        } else {
            if (b < c) {
                int f = a;
                a = b;
                b = f;
                int g = b;
                b = c;
                c = g;
            } else {
                int h = a;
                a = c;
                c = h;
            }
        }
    }
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        if ((a * a + b * b) > (c * c)) {
            return 0; // Acute Triangle
        } else if ((a * a + b * b) == (c * c)) {
            return 1; // Right Triangle
        } else if ((a * a + b * b) < (c * c)) {
            return 2; // Obtuse Triangle
        }
    }
    return -1; // Invalid Triangle
}