int solve_student(int a, int b, int c) {
    int tmp;
    if (a < b) {
        tmp = a;
        a = b;
        b = tmp;
    }
    if (a < c) {
        tmp = a;
        a = c;
        c = tmp;
    }

    if (a >= (b + c)) {
        return -1; // Invalid Triangle
    } else if ((a * a) > ((b * b) + (c * c))) {
        return 2; // Obtuse Triangle
    } else if ((a * a) < ((b * b) + (c * c))) {
        return 0; // Acute Triangle
    } else {
        return 1; // Right Triangle
    }
}