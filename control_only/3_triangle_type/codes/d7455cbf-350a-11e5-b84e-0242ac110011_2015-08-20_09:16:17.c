int solve_student(int a, int b, int c) {
    if ((a + b > c) && (b + c > a) && (a + c > b)) { /*checking the triangle is valid or not*/
        if (((a * a + b * b) < c * c) || ((c * c + b * b) < a * a) || ((a * a + c * c) < b * b))
            return 2; /*condition for obtuse triangle*/
        else {
            if (((a * a + b * b) == c * c) || ((c * c + b * b) == a * a) || ((a * a + c * c) == b * b))
                return 1; /*condition for right triangle*/
            else
                return 0; /*condition for acute triangle*/
        }
    } else {
        return -1; /*invalid triangle*/
    }
}