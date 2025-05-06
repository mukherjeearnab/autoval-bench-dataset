int solve_student(int N) {
    int s = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            for (int k = j; k <= N; k++) {
                if (i + j > k && i + k > j && j + k > i) {
                    s++;
                }
            }
        }
    }
    return s;
}