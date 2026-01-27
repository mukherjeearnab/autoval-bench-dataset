int solve_student(const char s[], int n) {
    int len = 0;
    while (s[len] != '\0') {
        len++;
    }
    int start = 0;
    int end = len - 1;
    while (start < end) {
        if (s[start] != s[end]) {
            return 0;
        }
        start++;
        end--;
    }
    return 1;
}