
int solve_student(int num) {
    int rev = 0, rem;
    while (num > 0) {
        rem = num % 10;
        num = num / 10;
        rev = rev * 10 + rem;
    }
    return rev;
}
