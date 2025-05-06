int solve_student(int N) {
    int i, j, k, s = 0;

    for (i = 1; i <= N; i++) {
        for (j = i; j <= N; j++) {
            for (k = 1; k <= j; k++) {
                if ((i + j > k) && (j + k > i) && (k + i > j)) {
                    s++;
                }
            }
        }
    }

    return s;
}