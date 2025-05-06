int solve_master(int a, int b, int c) {
    int big_s;
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a)) {  // Triangle Sum Property
        if ((a > c) && (a > b)) {
            big_s = 0;
        }  // If side a is largest
        else if ((b > a) && (b > c)) {
            big_s = 1;
        }  // If side b is largest
        else {
            big_s = 2;
        }  // If side c is largest

        switch (big_s) {  // Computation for Triangle Type
            case 0:       // executes if a is largest side
                if ((b * b) + (c * c) < (a * a))
                    return 2;  // Obtuse Triangle
                else if ((b * b) + (c * c) == (a * a))
                    return 1;  // Right Triangle
                else
                    return 0;  // Acute Triangle

            case 1:  // executes if b is largest
                if ((a * a) + (c * c) < (b * b))
                    return 2;  // Obtuse Triangle
                else if ((a * a) + (c * c) == (b * b))
                    return 1;  // Right Triangle
                else
                    return 0;  // Acute Triangle

            case 2:  // executes if c is largest
                if ((b * b) + (a * a) < (c * c))
                    return 2;  // Obtuse Triangle
                else if ((b * b) + (a * a) == (c * c))
                    return 1;  // Right Triangle
                else
                    return 0;  // Acute Triangle

            default:
                return -1;  // Invalid Triangle
        }
    } else {
        return -1;  // Invalid Triangle
    }
}