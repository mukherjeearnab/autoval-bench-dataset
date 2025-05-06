int solve_student(int a, int b, int c) {
    if (((a + b > c) && (b + c > a) && (c + a > b)) == 0) { // evaluate when sides of triangle are invalid
        return -1;
    } else { // evaluate when sides of triangle are valid
        int max = a; // code to check maximum side of triangle
        if (b >= a) {
            max = b;
            if (c >= b)
                max = c;
        } else {
            if (c >= a)
                max = c;
        }

        int check;
        // code to check whether triangle is acute, obtuse or right angled according to max side
        if (max == c) {
            check = b * b + a * a - c * c;
        } else if (max == a) {
            check = b * b + c * c - a * a;
        } else {
            check = a * a + b * b - c * c;
        }

        if (check > 0) return 0; // Acute Triangle
        else if (check == 0) return 1; // Right Triangle
        else return 2; // Obtuse Triangle
    }
}