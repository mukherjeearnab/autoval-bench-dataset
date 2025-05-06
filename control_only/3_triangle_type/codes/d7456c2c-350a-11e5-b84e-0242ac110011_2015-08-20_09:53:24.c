int solve_student(int a, int b, int c) {
    if (a + b <= c || b + c <= a || a + c <= b || (a <= 0 || b <= 0 || c <= 0)) {
        return -1;
    }
    if ((c * c > a * a + b * b) || (b * b > a * a + c * c) || (a * a > b * b + c * c)) {
        return 2;
    }
    if ((c * c == a * a + b * b) || (b * b == a * a + c * c) || (a * a == b * b + c * c)) {
        return 1;
    }
    return 0;
}