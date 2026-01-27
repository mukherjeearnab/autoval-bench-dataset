int solve_student(int a, int b, int c) {
    int result;
    if (a > b && a > c) {
        result = a;
    }
    else if (b > a && b > c) {
        result = b;
    }
    else {
        result = c;
    }
    return result;
}