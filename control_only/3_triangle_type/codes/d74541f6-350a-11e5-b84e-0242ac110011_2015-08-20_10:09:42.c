int solve_student(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0)
        return -1;

    if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a)
        return 1;

    if (a*a + b*b > c*c && a*a + c*c > b*b && b*b + c*c > a*a)
        return 0;

    if (a + b <= c || a + c <= b || b + c <= a)
        return -1;

    if (a*a + b*b < c*c || a*a + c*c < b*b || b*b + c*c < a*a)
        return 2;

    return -1;
}