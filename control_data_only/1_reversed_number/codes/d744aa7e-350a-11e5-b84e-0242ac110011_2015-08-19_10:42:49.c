
int solve_student(int num) {
    int rev_num = 0, m;
    m = num;
    while (num > 0) {
        rev_num = (rev_num * 10) + (num % 10);
        num = num / 10;
    }
    return rev_num;
}
