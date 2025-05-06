int solve_student(int a, int b, int c) {
    if (a + b <= c || b + c <= a || c + a <= b) {
        return -1;
    } else {
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            return 1;
        } else {
            if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b) {
                return 2;
            } else {
                return 0;
            }
        }
    }
}