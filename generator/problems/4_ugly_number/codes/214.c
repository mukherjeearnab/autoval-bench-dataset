int solve_student(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    int factors = 0;
    while (n > 0) {
        if (n % 2 == 0) {
            factors++;
            n /= 2;
        } else if (n % 3 == 0) {
            factors++;
            n /= 3;
        } else if (n % 5 == 0) {
            factors++;
            n /= 5;
        } else {
            return 0;
        }
    }
    if (factors > 0) return 1; 
    else return 0;
}