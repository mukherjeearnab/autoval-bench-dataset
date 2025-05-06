int solve_student(int a, int b, int c) {
    if ((a + b < c) || (b + c < a) || (a + c < b))
        return -1;

    else if ((c * c == a * a + b * b) || (a * a == b * b + c * c) || (b * b == a * a + c * c))
        return 1;

    else if ((a > b && a > c) && (a * a < b * b + c * c))
        return 0;
    else if ((b > c && b > a) && (b * b < a * a + c * c))
        return 0;
    else if ((c > a && c > b) && (c * c < a * a + b * b))
        return 0;

    else if ((c > a && c > b) && (c * c > a * a + b * b))
        return 2;
    else if ((a > b && a > c) && (a * a > b * b + c * c))
        return 2;
    else if ((b > a && b > c) && (b * b > a * a + c * c))
        return 2;

    return 0;
}