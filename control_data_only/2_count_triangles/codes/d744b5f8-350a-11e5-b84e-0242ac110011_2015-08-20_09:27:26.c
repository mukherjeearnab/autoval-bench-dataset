int solve_student(int N) {
    int i = 0; /*i gives number of triangles possible*/
    for (int a = 1; a <= N; a = a + 1) { /* assume a>b>c then if b+c>a then triangle is possible for a<=N*/
        for (int b = 1; b <= a; b = b + 1) {
            for (int c = 1; c <= b; c = c + 1) {
                if (b + c > a) { /*increament i*/
                    i = i + 1;
                }
            }
        }
    }
    return i;
}