int solve_student(int num) {
    int revnum = 0;
    int tnum = num;
    while (tnum != 0) {
        revnum = revnum * 10 + tnum % 10;
        tnum = tnum / 10;
    }
    return revnum;
}