int solve_student(char *arr, int len) {
    int n = len;
    if (n == 0) return 0;
    int maxLen = 1;
    int start = 0;
    int charIndex[256] = {0};
    for (int i = 0; i < n; i++) {
        if (charIndex[arr[i]] != 0) {
            start = (start > charIndex[arr[i]]) ? start : charIndex[arr[i]];
        }
        charIndex[arr[i]] = i + 1;
        maxLen = (i - start + 1) > maxLen ? (i - start + 1) : maxLen;
    }
    return maxLen;
}