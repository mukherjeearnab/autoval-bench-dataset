int solve_student(int num) {
    int rev_num = 0;
    while (num > 0) {
        rev_num = (rev_num * 10);
        rev_num = rev_num + num % 10;
        num = num / 10;
    }
    return rev_num;
}