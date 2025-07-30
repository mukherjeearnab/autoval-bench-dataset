int solve_student(int n) {
    if (n <= 0) return 0;
    int s = 0;
    while (n != 1 && s != 1) {
        s = 0;
        int temp = n;
        while (temp > 0) {
            int d = temp % 10;
            s += d * d;
            temp /= 10;
        }
        n = s;
    }
    return (n == 1) ? 1 : 0;
}