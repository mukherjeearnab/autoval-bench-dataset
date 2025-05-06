int solve_student(int N) {
    int a, b, c, i = 0;
    for (a = 1; a <= N; a++) { 
        for (b = 1; b <= N; b++) { 
            for (c = 1; c <= N; c++) { 
                if (a + b > c)
                    i++;
            }
        }
    }
    return i;
}