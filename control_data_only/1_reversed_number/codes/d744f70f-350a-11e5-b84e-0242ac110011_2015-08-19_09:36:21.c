
int solve_student(int num) {
    int rev = 0;
    while (num != 0) {
        int d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    return rev;
}
