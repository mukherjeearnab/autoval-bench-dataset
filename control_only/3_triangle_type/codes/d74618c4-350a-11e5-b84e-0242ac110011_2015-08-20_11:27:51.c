int solve_student(int a, int b, int c) {
    if(a + b > c && b + c > a && c + a > b) {
        if(a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
            return 1;
        } else if(a * a + b * b > c * c && b * b + c * c > a * a && c * c + a * a > b * b) {
            return 0;
        } else {
            return 2;
        }
    } else {
        return -1;
    }
}