int solve_student(int a, int b, int c) {
    if(a + b <= c || b + c <= a || a + c <= b || a <= 0 || b <= 0 || c <= 0)
        return -1;
    if((a*a == (b*b + c*c)) || ((b*b) == (a*a + c*c)) || ((c*c) == (a*a + b*b)))
        return 1;
    if((a*a > (b*b + c*c)) || ((b*b) > (a*a + c*c)) || ((c*c) > (a*a + b*b)))
        return 2;
    return 0;
}