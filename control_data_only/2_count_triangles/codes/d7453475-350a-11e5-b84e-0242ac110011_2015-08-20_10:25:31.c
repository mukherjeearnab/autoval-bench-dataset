int solve_student(int N) {
    int n = 0, p, q, r;
    for (p = 1; p <= N; p++) {
        for (q = 1; q <= p; q++) {
            for (r = 1; r <= q; r++) {
                if (p < (q + r)) {
                    n = n + 1;
                }
            }
        }
    }
    return n;
}

int solve_student_2(int N) {
    int count = 0;
    for (int x = 1; x <= N; x++) {
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= j; k++) { 
                if (((j + k) > x) && ((x - j) < k)) {
                    count++;
                }
            }
        }
    }
    return count;
}

int solve_student_3(int N) {
    int n = 0, a, b, c;
    for (a = 1; a <= N; a++) {
        for (b = 1; b <= a; b++) {
            for (c = 1; c <= b; c++) { 
                if (((a + b) > c) && ((b + c) > a) && ((c + a) > b)) {
                    n++;
                }
            }
        }
    }
    return n;
}

int solve_student_4(int N) {
    int count = 0, p, q, r;
    for (p = 1; p <= N; p++) {
        for (q = 1; q <= p; q++) {
            for (r = 1; r <= q; r++) {
                if (((p + q) > r) && ((q + r) > p) && ((r + p) > q)) {
                    count++;
                }
            }
        }
    }
    return count;
}