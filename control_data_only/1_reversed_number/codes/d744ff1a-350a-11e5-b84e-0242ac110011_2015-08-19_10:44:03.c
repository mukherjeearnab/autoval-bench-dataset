int solve_student(int num) {
    int n = num, r = 0, d = 0;
    while(n != 0) {
        d = n % 10;
        r = r * 10 + d;
        n = n / 10;
    }
    return r;
}