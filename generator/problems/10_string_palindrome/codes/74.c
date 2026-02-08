int solve_student(char* s, int len) {
    int i = 0;
    while (i < len) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
        i++;
    }
    return 1;
}