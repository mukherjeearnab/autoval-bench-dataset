int solve_student(int num) {
    int rev = 0;
    while (num > 0) {
        rev = 10 * rev + num % 10;
        num = num / 10;
    }
    return rev;
}