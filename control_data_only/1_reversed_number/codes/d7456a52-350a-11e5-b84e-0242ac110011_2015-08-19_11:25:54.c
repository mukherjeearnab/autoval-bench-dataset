int solve_student(int num) {
    int rem = 0, rev = 0, k;
    k = num;
    while (k > 0) {
        rem = k % 10;
        k = k / 10;
        rev = rev * 10 + rem;
    }
    return rev;
}