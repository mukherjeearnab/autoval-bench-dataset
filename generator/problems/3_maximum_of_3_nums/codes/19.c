int solve_student(int a, int b, int c) {
    int mx;
    if (a > b && a > c)
        mx = a;
    else if (b > a && b > c)
        mx = b;
    else
        mx = c;
    return mx;
}