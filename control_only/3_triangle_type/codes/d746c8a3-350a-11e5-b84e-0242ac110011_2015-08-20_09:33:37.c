int solve_student(int a, int b, int c) {
    int A = a * a;
    int B = b * b;
    int C = c * c;

    if (((a + b) > c) && ((b + c) > a) && ((c + a) > b) && a > 0 && b > 0 && c > 0) {
        if (((A + B) > C) && ((C + B) > A) && ((A + C) > B)) {
            return 0; // Acute Triangle
        } else if (((A + B) == C) || ((C + B) == A) || ((A + C) == B)) {
            return 1; // Right Triangle
        } else if (((A + B) < C) || ((C + B) < A) || ((A + C) < B)) {
            return 2; // Obtuse Triangle
        }
    } else {
        return -1; // Invalid Triangle
    }
}