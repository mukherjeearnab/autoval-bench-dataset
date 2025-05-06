
int solve_student(int num) {
    int revnum = 0;
    while (num != 0) {
        revnum = revnum * 10 + num % 10;
        num = num / 10;
    }
    return revnum;
}
