int solve_student(int a, int b, int c) {
    if (a + c <= b || a + b <= c || b + c <= a) { // invalid triangle
        return -1;
    } else if (b * b == a * a + c * c || a * a == b * b + c * c || c * c == a * a + b * b) { // right triangle
        return 1;
    } else if (b * b > a * a + c * c || a * a > b * b + c * c || c * c > a * a + b * b) { // obtuse triangle
        return 2;
    } else { // acute triangle
        return 0;
    }
}