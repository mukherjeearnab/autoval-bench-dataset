
int solve_student(int num) {
    int n = num, r = 0;
    while (n != 0) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}
