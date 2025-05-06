int solve_student(int N) {
    int count = 0;
    for (int a = 1; a <= N; a++) {
        for (int b = 1; b <= a; b++) {
            for (int c = 1; c <= b; c++) {
                if ((a + b > c) && (b + c > a) && (c + a > b)) {
                    count++;
                }
            }
        }
    }
    return count;
}