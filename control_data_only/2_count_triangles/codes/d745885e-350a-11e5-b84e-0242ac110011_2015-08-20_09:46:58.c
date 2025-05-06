int solve_student(int N) {
    int t = 0;
    for (int i = 1; i <= N; i++) 
        for (int j = 1; j <= i; j++) 
            for (int k = 1; k <= j; k++) 
                if ((k + j) > i) 
                    t++;
    return t;
}

int solve_student_2(int N) {
    int count = 0;
    for (int a = 1; a <= N; a++)
        for (int b = a; b <= N; b++)
            for (int c = b; c <= N; c++)
                if ((a + b) > c && (a + c) > b && (b + c) > a)
                    count++;
    return count;
}

int solve_student_3(int N) {
    int i = 0;
    for (int a = 1; a <= N; a++) 
        for (int b = 1; b <= a; b++)
            for (int c = 1; c <= b; c++)
                if (a < (c + b))
                    i++;
    return i;
}

int solve_student_4(int N) {
    int count = 0;
    for (int x = 1; x <= N; x++)
        for (int y = x; y <= N; y++)
            for (int z = y; z <= N; z++)
                if (((x + y) > z && (y + z) > x && (z + x) > y))
                    count++;
    return count;
}

int solve_student_5(int N) {
    int c = 0;
    for (int i = 1; i <= N; i++)
        for (int j = i; j <= N; j++)
            for (int k = j; k <= N; k++)
                if ((i < (j + k)) && (j < (i + k)) && (k < (i + j)))
                    c++;
    return c;
}

int solve_student_6(int N) {
    int i = 0;
    for (int a = 1; a <= N; a++) 
        for (int b = 1; b <= a; b++)
            for (int c = 1; c <= b; c++)
                if (a < (c + b))
                    i++;
    return i;
}

int solve_student_7(int N) {
    int n = (((((N * N * N)) + (3 * N * N)) + (2 * N))) / 6;
    int i = 0;
    for (int x = 1; x <= N; x++)
        for (int y = x; y <= N; y++)
            for (int z = y; z <= N; z++)
                if (((x + y) <= z || (y + z) <= x || (z + x) <= y))
                    i++;
    return n - i;
}

int solve_student_8(int N) {
    int count = 0;
    for (int n = 1; n <= N; n++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= i; j++)
                if (i + j > n)
                    count++;
    return count;
}