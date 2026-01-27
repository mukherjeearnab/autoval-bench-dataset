int solve_student(int a, int b, int c) {
    int max_val;
    if (a > b && a > c) {
        max_val = a;
    }
    else if (b > a && b > c) {
        max_val = b;
    }
    else {
        max_val = c;
    }
    return max_val;
}