int solve_student(int N) {
    int counter = 0;
    for (int a = 1; a <= N; a++) {
        for (int b = a; b <= N; b++) {
            for (int c = b; c <= N; c++) {
                if ((a + b) > c)
                    counter++;
            }
        }
    }
    return counter;
}