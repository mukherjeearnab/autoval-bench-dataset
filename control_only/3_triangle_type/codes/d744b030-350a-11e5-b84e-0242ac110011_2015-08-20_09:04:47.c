int solve_student(int a, int b, int c) {
    if ((a + b <= c) || (a + c <= b) || (b + c <= a)) {
        return -1; /* Invalid Triangle */
    } else {
        if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
            return 1; /* Right Triangle */
        } else {
            if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > a * a + b * b)) {
                return 2; /* Obtuse Triangle */
            } else {
                return 0; /* Acute Triangle */
            }
        }
    }
}