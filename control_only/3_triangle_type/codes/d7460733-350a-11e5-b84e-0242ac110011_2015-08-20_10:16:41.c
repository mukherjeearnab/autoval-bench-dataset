int solve_student(int a, int b, int c) {
    int max1, max2, max3;

    if (a >= b && a >= c) {
        max1 = a;
        if (b >= c) {
            max2 = b;
            max3 = c;
        } else {
            max2 = c;
            max3 = b;
        }
    } else if (b >= a && b >= c) {
        max1 = b;
        if (c >= a) {
            max2 = c;
            max3 = a;
        } else {
            max2 = a;
            max3 = c;
        }
    } else {
        max1 = c;
        if (a >= b) {
            max2 = a;
            max3 = b;
        } else {
            max2 = b;
            max3 = a;
        }
    }

    if ((max1 + max2 <= max3) || (max1 + max3 <= max2) || (max2 + max3 <= max1)) {
        return 0; // Invalid Triangle
    } else if ((max1 * max1 == max2 * max2 + max3 * max3) ||
               (max2 * max2 == max1 * max1 + max3 * max3) ||
               (max3 * max3 == max1 * max1 + max2 * max2)) {
        return 1; // Right Triangle
    } else if ((max1 * max1 < max2 * max2 + max3 * max3) &&
               (max2 * max2 < max1 * max1 + max3 * max3) &&
               (max3 * max3 < max1 * max1 + max2 * max2)) {
        return 2; // Acute Triangle
    } else {
        return 3; // Obtuse Triangle
    }
}