int solve_student(int n) {
    if (n <= 0) return 0;
    int factors = 0;
    if (n % 2 == 0) factors++;
    if (n % 3 == 0) factors++;
    if (n % 5 == 0) factors++;
    if (factors == 0) return 1;
    else return 0;
}