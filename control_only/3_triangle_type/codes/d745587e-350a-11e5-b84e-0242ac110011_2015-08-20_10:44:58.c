int solve_student(int a, int b, int c) {
    int max, mid, min;

    if (a > b) {
        if (a > c) {
            max = a;
            if (b > c) {
                mid = b;
                min = c;
            } else {
                mid = c;
                min = b;
            }
        } else {
            max = c;
            mid = a;
            min = b;
        }
    } else {
        if (b > c) {
            max = b;
            if (a > c) {
                mid = a;
                min = c;
            } else {
                mid = c;
                min = a;
            }
        } else {
            max = c;
            mid = b;
            min = a;
        }
    }

    int x = max * max;
    int y = mid * mid;
    int z = min * min;

    if (x >= y + z) {
        if (x == y + z) {
            return 1; // Right Triangle
        } else {
            return 2; // Obtuse Triangle
        }
    } else {
        return 0; // Acute Triangle
    }

    if (a + b <= c || a + c <= b || b + c <= a) {
        return 3; // Invalid Triangle
    }
}