int solve_student(int a, int b, int c) {
    if ((a + b) <= c || (b + c) <= a || (c + a) <= b) {
        return -1; // Invalid Triangle
    }
    
    int a2 = a * a;
    int b2 = b * b;
    int c2 = c * c;

    if ((a2 == b2 + c2) || (b2 == a2 + c2) || (c2 == a2 + b2)) {
        return 0; // Right Triangle
    } else if ((a2 > b2 + c2) || (b2 > a2 + c2) || (c2 > a2 + b2)) {
        return 1; // Obtuse Triangle
    } else {
        return 2; // Acute Triangle
    }
}