int solve_student(int n) {
    if (n <= 0) return 0;
    int i = 2;
    while (i <= n) {
        if (n % i == 0) {
            n /= i;
        } else {
            i++;
        }
        if (i > 5) break; 
    }
    if (n == 1) return 1;
    else return 0;
}