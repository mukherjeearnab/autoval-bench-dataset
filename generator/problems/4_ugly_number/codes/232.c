int solve_student(int n) {
    if (n < 0) return 0;
    if (n == 1) return 0;
    while (n > 1) {
        if (n % 2 == 0) n = n / 2;
        else if (n % 3 == 0) n = n / 3;
        else if (n % 5 == 0) n = n / 5;
        else return 0;
    }
    return 1;
}