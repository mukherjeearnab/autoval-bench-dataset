int solve_student(int N) {
    int cnt = 0;
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            for (int k = j; k <= N; k++) {
                if ((i + j > k) && (j + k > i) && (i + k > j))
                    cnt++;
            }
        }
    }
    return cnt;
}