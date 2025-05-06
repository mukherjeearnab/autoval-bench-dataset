int solve_student(int N) {
    int a, b, c, n_o_t = 0;
    for (a = 1; a <= N; a++) {
        for (b = a; b <= N; b++) {
            for (c = b; c <= N; c++) {
                if ((a + b > c) && (a + c > b) && (b + c > a)) {
                    n_o_t++;
                }
            }
        }
    }
    return n_o_t;
}