int solve_student(int N) {
    int i, j, k, s = 0;
    for (i = 1; i <= N; i = i + 1) {
        for (j = 1; j <= i; j = j + 1) {
            for (k = 1; k <= j; k = k + 1) {
                if ((j + k > i) && (i + k > j) && (i + j > k))
                    s = s + 1;
            }
        }
    }
    return s;
}