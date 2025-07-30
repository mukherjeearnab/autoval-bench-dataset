int solve_student(int n) {
    int s = 0;
    int temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        s += digit * digit;
        temp /= 10;
    }
    if (s == 1) {
        return 1;
    } else if (s == 4) {
        return 0;
    } else {
        return solve_student(s);
    }
}