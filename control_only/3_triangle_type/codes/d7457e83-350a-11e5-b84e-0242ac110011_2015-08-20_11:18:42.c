int solve_student(int a, int b, int c) {
    if ((a + b <= c) || (b + c <= a) || (a + c <= b)) {
        return -1; // Invalid Triangle
    }
    
    if ((c * c == a * a + b * b) || (a * a == b * b + c * c) || (b * b == a * a + c * c)) {
        return 0; // Right Triangle
    }
    
    int max, mid, min;
    if (a >= b && a >= c) {
        max = a;
        mid = b > c ? b : c;
        min = b < c ? b : c;
    } else if (b >= a && b >= c) {
        max = b;
        mid = a > c ? a : c;
        min = a < c ? a : c;
    } else {
        max = c;
        mid = a > b ? a : b;
        min = a < b ? a : b;
    }
    
    int mx = max * max;
    int md = mid * mid;
    int mn = min * min;
    
    if (mx < md + mn) {
        return 1; // Acute Triangle
    } else {
        return 2; // Obtuse Triangle
    }
}