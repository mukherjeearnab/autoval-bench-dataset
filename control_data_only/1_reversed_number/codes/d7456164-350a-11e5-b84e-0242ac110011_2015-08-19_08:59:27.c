int solve_student(int num) {
    int rnum = 0;
    while (num > 0) {
        rnum = (rnum * 10) + num % 10;
        num = num / 10;
    }
    return rnum;
}