int solve_student(int a, int b, int c) { // Find the largest of three integers
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}