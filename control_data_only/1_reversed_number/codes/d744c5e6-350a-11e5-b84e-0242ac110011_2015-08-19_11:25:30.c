int solve_student(int num) {
    int rev = 0, d, r;
    while (num != 0) {
        d = num / 10;
        r = num % 10;
        rev = 10 * rev + r;
        num = d;
    }
    return rev;
}