int solve_student(int n) {
    if (n <= 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }

    int factors[] = {2, 3, 5};

    for (int i = 0; i < 3; i++) {
        while (n % factors[i] == 0) {
            n /= factors[i];
        }
    }

    return (n == 1);
}