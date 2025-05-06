int solve_master(int num) {
    int rev = 0;
    int copy = num;
    while (copy > 0) {
        int a = copy % 10;
        rev = rev * 10 + a;
        copy /= 10;
    }
    return rev;
}
