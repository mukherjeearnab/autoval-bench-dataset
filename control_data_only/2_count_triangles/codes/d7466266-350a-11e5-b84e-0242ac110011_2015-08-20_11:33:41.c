int solve_student(int N) {
    int count = 0, a, b, c;
    for (a = 1; a <= N; a++) {
        for (b = 1; b <= a; b++) {
            for (c = 1; c <= b; c++) {
                if ((a + b > c) && (a + c > b) && (b + c > a)) 
                    count++;
            }
        }
    }
    return count;
}