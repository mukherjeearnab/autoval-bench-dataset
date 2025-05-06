int solve_student(int a, int b, int c) {
    int A = ((b * b) + (c * c) - (a * a));
    int B = ((a * a) + (c * c) - (b * b));
    int C = ((a * a) + (b * b) - (c * c));

    if (((a + b <= c) || (a + c <= b) || (b + c <= a)) || (a <= 0 || b <= 0 || c <= 0)) {
        return -1;
    } else {
        if (A < 0 || B < 0 || C < 0) {
            return 2;
        } else {
            if (A == 0 || B == 0 || C == 0) {
                return 1;
            } else {
                return 0;
            }
        }
    }
}