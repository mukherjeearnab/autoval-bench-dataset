int solve_student(int a, int b, int c) {
    int tmp; // tmp as temporary variable for swapping
    if(a > c) {       // to check largest side 
        tmp = c; // swapping
        c = a;
        a = tmp;
    }
    if(b > c) {       // to check largest side 
        tmp = c; // swapping
        c = b;
        b = tmp;
    }
    if((a + b) <= c) {
        return -1; // Invalid Triangle
    } else if((a * a + b * b) == (c * c)) {
        return 0; // Right Triangle
    } else if((a * a + b * b) < (c * c)) {
        return 1; // Obtuse Triangle
    } else {
        return 2; // Acute Triangle
    }
}