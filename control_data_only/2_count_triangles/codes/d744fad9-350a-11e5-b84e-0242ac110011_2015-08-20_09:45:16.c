int solve_student(int N) {
    int n = 0, p, q, r; 
    for(p = 1; p <= N; p++) {
        for(q = 1; q <= p; q++) {
            for(r = 1; r <= q; r++) {
                if((p + q > r) && (q + r > p) && (r + p > q)) {
                    n++;
                }
            }
        }
    }
    return n;
}