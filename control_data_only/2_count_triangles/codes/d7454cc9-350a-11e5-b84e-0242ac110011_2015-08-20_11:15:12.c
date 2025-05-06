int solve_student(int N) {
    int count = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= j; k++) {
                if ((i + j > k) && (j + k > i) && (k + i > j)) {
                    count++;
                }
            }
        }
    }
    return count;
}