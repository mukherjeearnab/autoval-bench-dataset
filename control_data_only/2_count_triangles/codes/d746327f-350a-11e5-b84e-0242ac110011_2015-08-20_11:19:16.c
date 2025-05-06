int solve_student(int N) {
    int i, j, k, count = 0;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            for (k = 1; k <= j; k++) {
                if ((j + k > i) && (i + k > j) && (i + j > k))
                    count++;
            }
        }
    }
    return count;
}