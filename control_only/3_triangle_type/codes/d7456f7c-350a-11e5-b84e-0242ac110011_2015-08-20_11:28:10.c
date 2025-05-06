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

    if ((min + mid) > max) {
        int max_sq = max * max;
        int sum_of_squares = min * min + mid * mid;
        if (sum_of_squares == max_sq)
            return 1; // Right Triangle
        else if (sum_of_squares > max_sq)
            return 0; // Acute Triangle
        else
            return 2; // Obtuse Triangle
    } else {
        return 3; // Invalid Triangle
    }
}