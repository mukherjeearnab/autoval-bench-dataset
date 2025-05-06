int solve_student(int a, int b, int c) {
    if ((a + b <= c) || (b + c <= a) || (c + a <= b) || (a <= 0) || (b <= 0) || (c <= 0)) {
        return -1;
    } else if (((a * a) + (b * b) > (c * c)) && ((a * a) + (c * c) > (b * b)) && ((c * c) + (b * b) > (a * a))) {
        return 0;
    } else if (((a * a) + (b * b) == (c * c)) || ((a * a) + (c * c) == (b * b)) || ((b * b) + (c * c) == (a * a))) {
        return 1;
    } else if (((a * a) + (b * b) < (c * c)) || ((a * a) + (c * c) < (b * b)) || ((b * b) + (c * c) < (a * a))) {
        return 2;
    }
    return -1;
}