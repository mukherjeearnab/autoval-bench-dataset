int solve_student(int num) {
    int rev = 0;
    int r;
    while(num != 0) {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    return rev;
}