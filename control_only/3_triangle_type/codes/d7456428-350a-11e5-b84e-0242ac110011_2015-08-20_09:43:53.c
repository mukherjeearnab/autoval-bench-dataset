int solve_student(int a, int b, int c) {
    int x, y, result_a, result_b, result_c;

    if (a <= 0 || b <= 0 || c <= 0) {
        return -1;
    }

    /* Check triangle inequality */
    if (!((a + b > c) && (b + c > a) && (c + a > b))) {
        return -1;
    }

    result_a = (a * a) + (b * b) - (c * c);
    result_b = (b * b) + (c * c) - (a * a);
    result_c = (c * c) + (a * a) - (b * b);

    x = (result_a > 0) + (result_b > 0) + (result_c > 0);
    y = (result_a == 0) + (result_b == 0) + (result_c == 0);

    if (y == 1 && x == 2) {
        return 1; /* Right triangle */
    } else if (x == 3) {
        return 0; /* Acute triangle */
    } else if (x < 3) {
        return 2; /* Obtuse triangle */
    }

    return -1;
}