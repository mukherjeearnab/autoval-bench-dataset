int solve_student(int a, int b, int c) {
    if (a >= b) {   // Exchanging the values of a and b if a>=b
        int x = a;
        a = b;
        b = x;
    }
    if (c <= b) {    // Exchanging the values of b and c if b>=c 
        int y = b;
        b = c;
        c = y;
    }           // Finally we have a <= b <= c
    if (a + b <= c) {
        return -1; // Condition for invalid triangle
    } else {
        if (a * a + b * b == c * c) {
            return 1; // Condition for right triangle
        } else if (a * a + b * b > c * c) {
            return 0; // Condition for acute triangle
        } else {
            return 2; // Condition for obtuse triangle
        }
    }
}