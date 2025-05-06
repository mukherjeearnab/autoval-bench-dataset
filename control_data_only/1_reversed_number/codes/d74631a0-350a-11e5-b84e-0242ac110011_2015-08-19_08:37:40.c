int solve_student(int num) {
    int reqn = 0;
    while (num != 0) {
        int rem = num % 10;
        reqn = 10 * reqn + rem;
        num /= 10;
    }
    return reqn;
}