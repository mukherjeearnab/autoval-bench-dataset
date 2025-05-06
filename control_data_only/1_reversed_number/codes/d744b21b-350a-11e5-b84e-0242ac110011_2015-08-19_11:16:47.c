int solve_student(int num) {
    int rev_num = 0, n = num;
    while(n > 0) {
        rev_num = (rev_num * 10) + n % 10;
        n = n / 10;
    }
    return rev_num;
}