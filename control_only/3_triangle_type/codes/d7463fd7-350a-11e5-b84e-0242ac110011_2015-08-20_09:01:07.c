int solve_student(int a, int b, int c) {
    int max; // 'max' is introduced for storing the largest value 

    // algorithm for finding maximum value
    if (a <= b) {
        if (b >= c) {
            max = b;
        } else {
            max = c;
        }
    } else {
        if (a <= c) {
            max = a;
        } else {
            max = c;
        }
    }

    if ((a + b + c - (2 * max)) <= 0) { // sum of two sides must be greater than third side for a valid triangle
        return -1;
    } else {
        if ((a * a) + (b * b) + (c * c) == (2 * max * max)) { // cosine of largest angle is zero 
            return 1;
        } else if ((a * a) + (b * b) + (c * c) > (2 * max * max)) { // cosine of largest angle is greater than 0
            return 0;
        } else if ((a * a) + (b * b) + (c * c) < (2 * max * max)) { // cosine of largest angle is less than 0
            return 2;
        }
    }

    return -1;
}