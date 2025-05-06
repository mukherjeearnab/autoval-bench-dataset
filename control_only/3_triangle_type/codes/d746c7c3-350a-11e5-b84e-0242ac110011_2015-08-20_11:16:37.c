int solve_student(int a, int b, int c) {
    int t;

    if (a > c) { // swap a & c
        t = c;
        c = a;
        a = t;
    }

    if (b > c) { // swap b & c
        t = c;
        c = b;
        b = t;
    }
    // now c is the longest side

    if (a + b <= c || b + c <= a || a + c <= b)
        return -1; // Invalid Triangle

    else if (c * c > a * a + b * b)
        return 2; // Obtuse Triangle

    else if (c * c < a * a + b * b)
        return 0; // Acute Triangle

    else
        return 1; // Right Triangle
}