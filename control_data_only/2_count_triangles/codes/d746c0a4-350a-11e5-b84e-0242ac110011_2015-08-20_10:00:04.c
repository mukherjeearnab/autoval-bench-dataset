int solve_student(int N) {
    int I = 0, a, b, c;
    for (a = 1; a <= N; a++) 
        for (b = 1; b <= a; b++) 
            for (c = 1; c <= b; c++) 
                if (a + b > c && b + c > a && c + a > b) 
                    I++; 
    return I;
}