int solve_student(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0 || ((a + b <= c) || (a + c <= b) || (b + c <= a))) {
        return -1;
    }
    
    int l = a * a + b * b;
    int m = b * b + c * c;
    int n = a * a + c * c;
    
    if ((l == c * c) || (m == a * a) || (n == b * b)) {
        return 1;
    } else if (((l > c * c) + (m > a * a) + (n > b * b)) == 2) {
        return 0;
    } else {
        return 2;
    }
}