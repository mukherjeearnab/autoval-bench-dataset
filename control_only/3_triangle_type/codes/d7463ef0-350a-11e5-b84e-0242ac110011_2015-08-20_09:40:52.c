int solve_student(int a, int b, int c) {
    int max, min, mid;
    if ((a > b) && (a > c))
        max = a;
    if ((c > b) && (c > a))
        max = c;
    if ((b > c) && (b > a))
        max = b;
    if ((a < b) && (a < c))
        min = a;
    if ((c < b) && (c < a))
        min = c;
    if ((b < c) && (b < a))
        min = b;
    if ((a != min) && (a != max))
        mid = a;
    if ((b != min) && (b != max))
        mid = b;
    if ((c != min) && (c != max))
        mid = c;
    if ((min + mid) > (max)) {
        int cos = (min * min) + (mid * mid) - (max * max);
        if (cos == 0)
            return 1; // Right Triangle
        if (cos > 0)
            return 0; // Acute Triangle
        if (cos < 0)
            return 2; // Obtuse Triangle
    }
    else
        return -1; // Invalid Triangle

    return -1;
}