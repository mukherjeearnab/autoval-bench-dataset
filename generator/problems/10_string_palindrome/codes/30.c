int solve_student(const char s[], int n) {
    int i, j;
    i = 0;
    j = n;
    while (i < j) {
        if (s[i] != s[j]) {
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}