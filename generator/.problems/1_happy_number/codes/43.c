int solve_student(int n) {
    int s = 0;
    while (n != 1 && s != n) {
        s = 0;
        int temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            s += digit * digit;
            temp /= 10;
        }
        n = s;
    }
    return n == 1;
}