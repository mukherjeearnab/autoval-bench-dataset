int solve_student(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0 || a + b <= c || a + c <= b || b + c <= a) {
        return -1;
    }
    
    if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b)) {
        return 1;
    }
    
    if ((a * a > b * b + c * c) || (b * b > a * a + c * c) || (c * c > a * a + b * b)) {
        return 2;
    }
    
    return 0;
}