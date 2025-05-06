int solve_student(int a, int b, int c) {
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {
        if ((a > c) && (a > b)) {
            if ((b * b) + (c * c) < (a * a)) return 2;
            else if ((b * b) + (c * c) == (a * a)) return 1;
            else return 0;
        } else if ((b > a) && (b > c)) {
            if ((a * a) + (c * c) < (b * b)) return 2;
            else if ((a * a) + (c * c) == (b * b)) return 1;
            else return 0;
        } else {
            if ((b * b) + (a * a) < (c * c)) return 2;
            else if ((b * b) + (a * a) == (c * c)) return 1;
            else return 0;
        }
    } else {
        return -1; // Invalid Triangle
    }
}