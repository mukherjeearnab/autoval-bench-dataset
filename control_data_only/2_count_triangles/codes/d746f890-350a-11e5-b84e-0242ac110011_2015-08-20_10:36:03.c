int solve_student(int N) {
    int a, b, c, x = 0;
    for (a = 1; a <= N; a++) {
        for (b = 1; b <= a; b++) {
            for (c = 1; c <= b; c++) {
                if (a + b > c && a + c > b && b + c > a) {
                    x++;
                }
            }
        }
    }
    return x;
}