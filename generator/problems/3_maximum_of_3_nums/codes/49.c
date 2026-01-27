int solve_student(int a, int b, int c) {
    int max_val;
    if (a > b) {
        max_val = a;
    } else {
        max_val = b;
    }
    if (c > max_val) {
        max_val = c;
    }
    return max_val;
}