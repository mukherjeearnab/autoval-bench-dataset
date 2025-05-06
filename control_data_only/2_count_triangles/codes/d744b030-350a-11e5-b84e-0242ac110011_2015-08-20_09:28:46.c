int solve_student(int N) {
    int c = 0; 
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j++) {
            for (int k = j; k <= N; k++) {
                if ((i < j + k) && (j < i + k) && (k < i + j)) {
                    c++;
                }
            }
        }
    }
    return c;
}