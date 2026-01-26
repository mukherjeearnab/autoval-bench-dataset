int solve_student(int n) {
    if (n == 0) return 0;
    int power = 1;
    while (power < n) {
        power = power * 2;
    }
    if (power == n) return 1;
    else return 0;
}