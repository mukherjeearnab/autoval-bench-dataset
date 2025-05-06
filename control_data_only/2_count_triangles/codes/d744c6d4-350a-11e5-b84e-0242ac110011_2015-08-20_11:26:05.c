int solve_student(int N) {
    int i = 0, a, b, c;

    for (a = 1; a <= N; a++) {
        for (b = 1; b <= a; b++) {
            for (c = 1; c <= b; c++) {
                if (a < c + b)
                    i++;
            }
        }
    }

    return i;
}