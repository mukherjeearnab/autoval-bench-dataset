int solve_student(const char s[], int n) {
    int i, j;
    j = n;
    for (i = 0; i < n / 2; i++) {
        if (s[i] != s[j])
            return 0;
        j--;
    }
    return 1;
}